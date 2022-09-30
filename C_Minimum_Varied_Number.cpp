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
#define REVSORT(v) sort(all(v),greater<int>())
#define MAX(v) max_element(all(v))
#define MIN(v) min_element(all(v))
#define rep(from,to) for(int i = from;i<=to;i++)
#define rep_back(from,to) for(int i = from;i>=to;i--)
#define take(v) rep(0,v.size())cin>>v[i];
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

bool isPowerOfTwo(int n)
{
    if(n==0)
    return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

void google(int i)
{
    cout << "Case #" << i << ": ";
}

/* ========== YOUR CODE HERE ========= */

/*
    if(num%9) 
*/

int main()
{
    FASTIO;
    int t;cin>>t;

    vector<string>dp;
    // int n = 123456789;
    // cout<<n;
    dp.push_back("0");
    for(int i = 1;i<=9;i++)
    {
        string temp = to_string(i);
        dp.push_back(temp);
    }
    // for(auto i:dp)cout<<i<<" ";
    int curr = 9;
    // cout<<dp[0]<<"\n";
    for(int i = 10;i<=45;i++)
    {
        string currNum = dp[i-curr];
        // cout<<currNum<<" ";
        currNum += to_string(curr);
        set<char> s(currNum.begin(),currNum.end());
        if(s.size() != currNum.length())
        {
            curr--;
            currNum = dp[i-curr];
            currNum += to_string(curr);
        }
        // cout<<currNum<<"\n";
        SORT(currNum);
        dp.push_back(currNum);
    }
    // for(auto i:dp)cout<<i<<" ";
    // for(auto i:dp)cout<<i<<" ";
    for(int i = 0;i<t;i++)
    {
        int n;cin>>n;
        cout<<dp[n]<<"\n";
        // google(i);
    }

    return 0;
}