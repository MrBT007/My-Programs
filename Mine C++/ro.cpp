/*
    ॐ श्री गणेशाय नम:
    ॐ नमः शिवाय
    જય ભૂત દાદા

    Name : Bhut Tushar
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define ll long long
#define ull unsigned long long
#define sz size()
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
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
using namespace __gnu_pbds;

/* ========== TEMPLATES ========= */

template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
    for (const T &x : v)
        os << sep << x, sep = " ";
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

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return (a.second > b.second);
    }
    return a.first < b.first;
}

int main()
{
    FASTIO;
    string s;cin>>s;
    map<char,int>mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    int odd = 0;
    for(auto i:mp) odd = odd + (i.second%2 == 1 ? 1 : 0);
    
    if(odd == 0 or odd%2 == 1)cout<<"First\n";
    else cout<<"Second\n";

    return 0;
}