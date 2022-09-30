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
#define all(i) (i).begin(), (i).end()
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

/* ========== TEMPLATES ========= */

template <class A>
istream &operator>>(istream &in, vector<A> &a)
{
    for (A &i : a)
        in >> i;
    return in;
}

template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    string sep;
    for (const T &i : v)
        os << sep << i, sep = " ";
    return os;
}

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

bool is_prime(int n)
{
    if (n == 1)
    {
        return false;
    }

    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i += 1;
    }
    return true;
}
void google(int i)
{
    cout << "Case #" << i << ": ";
}

/* ========== YOUR CODE HERE ========= */

bool sort1(pair<string, pair<int, int>> &i, pair<string, pair<int, int>> &j)
{
    if (i.second.first != j.second.first)
        return (i.second.first < j.second.first);
    else
        return (i.second.second < j.second.second);
}
bool sort2(pair<string, pair<int, int>> &i, pair<string, pair<int, int>> &j)
{
    if (i.first != j.first)
        return (i.first < j.first);
    else
        return (i.second.second < j.second.second);
}

int main()
{
    FASTIO;
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        google(t);
        ll n;
        cin >> n;
        vector<pair<string, pair<int, int>>> mp;
        vector<pair<string, pair<int, int>>> temp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int d, u;
            cin >> d >> u;
            mp.push_back({s, {d, u}});
        }
        temp = mp;
        sort(mp.begin(), mp.end(), sort2);
        sort(temp.begin(), temp.end(), sort1);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (temp[i] == mp[i])
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}