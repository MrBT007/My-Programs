/*
    ॐ श्री गणेशाय नम:
    ॐ नमः शिवाय
    જય ભૂત દાદા

    Name : Bhut Tushar
*/

// #include<allGod>
#include <bits/stdc++.h>

#define ll long long
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

/* ========== YOUR CODE HERE ========= */

int main()
{
    FASTIO;
    ll n,m;cin>>n;
    
    vector<ll>arr(100005);
    vector<int>hsh1(100005);
    vector<int>hsh2(100005);
    arr[0] = -1;
    for(ll i = 1;i<=n;i++)
    {
        cin>>arr[i];
        hsh1[arr[i]] = i;
        hsh2[arr[i]] = n-i+1;
    }
    // for (int i = 0; i < hsh1.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    // for (int i = 0; i < hsh1.size(); i++)
    // {
    //     cout<<hsh1[i]<<" ";
    // }
    // cout<<"\n";
    // for (int i = 0; i < hsh1.size(); i++)
    // {
    //     cout<<hsh2[i]<<" ";
    // }
    // cout<<"\n";
    
    cin>>m;
    vector<ll>q(m);
    ll a = 0,b = 0;
    for(ll i = 0;i<m;i++)
    {
        cin>>q[i];
        a+=hsh1[q[i]];
        b+=hsh2[q[i]];
    }
    cout<<a<<" "<<b<<"\n";

    return 0;
}