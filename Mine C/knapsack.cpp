/*
    ॐ श्री गणेशाय नम:
    ॐ नमः शिवाय
    જય ભૂત દાદા

    Name : Bhut Tushar
*/

#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define sz size()
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define SORT(v) sort(all(v))
#define REVSORT(v) sort(all(v), greater<int>())
#define MAX(v) max_element(all(v))
#define MIN(v) min_element(all(v))
#define rep(from, to) for (int i = from; i <= to; i++)
#define rep_back(from, to) for (int i = from; i >= to; i--)
#define take(v) rep(0, v.size()) cin >> v[i];
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

void google(int i)
{
    cout << "Case #" << i << ": ";
}

/* ========== YOUR CODE HERE ========= */

bool cmp(pair<int, pair<int, double>> &a, pair<int, pair<int, double>> &b)
{
    return a.second.second > b.second.second;
}

int main()
{
    cout << "Enter number of Weights\n";
    int n;
    cin >> n;
    cout << "Enter profit array\n";
    vector<int> profitarr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> profitarr[i];
    }
    vector<int> weightarr(n);
    cout << "Enter weight array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> weightarr[i];
    }
    cout << "Enter Capacity\n";
    int capacity;
    cin >> capacity;

    // profit,(weight,p/w)
    vector<pair<int, pair<int, double>>> mp;
    for (int i = 0; i < n; i++)
    {
        mp.push_back({profitarr[i], {weightarr[i], profitarr[i] * 1.0 / weightarr[i] * 1.0}});
    }
    sort(mp.begin(), mp.end(), cmp);

    double ans = 0;
    auto j = 0;
    for (auto i : mp)
    {
        if (capacity - i.second.first >= 0)
        {
            capacity -= i.second.first;
            ans += i.first;
            j++;
        }
        else
        {
            if (capacity)
            {
                ans += (i.first*capacity)*1.0/i.second.first*1.0;
                break;
            }
        }
    }
    cout<<"Maximum profit is "<<ans<<"\n";

    return 0;
}