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

bool solve(vector<vector<char>> &arr, int r, int c)
{
    if (r == 1 or c == 1)
    {
        int count = 0;
        for (int j = 0; j < r; j++)
        {
            for (int k = 0; k < c; k++)
            {
                if (arr[j][k] == '^')
                    count++;
            }
        }
        if (count == 0)
            return true;
        return false;
    }
    else
    {
        for (int j = 0; j < r; j++)
        {
            for (int k = 0; k < c; k++)
            {
                arr[j][k] = '^';
            }
        }
    }
    return true;
}

int main()
{
    FASTIO;

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        google(i);
        int r, c;
        cin >> r >> c;
        vector<vector<char>> arr;
        for (int j = 0; j < r; j++)
        {
            vector<char> temp(c);
            for (int k = 0; k < c; k++)
            {
                cin >> temp[k];
            }
            arr.push_back(temp);
        }
        if (solve(arr, r, c))
        {
            cout << "Possible\n";
            for (auto j : arr)
            {
                for (auto k : j)
                    cout << k;
                cout << "\n";
            }
        }
        else cout<<"Impossible\n";
    }

    return 0;
}