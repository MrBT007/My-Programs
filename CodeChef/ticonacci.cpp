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
    int t;cin>>t;
    while(t--)
    {
        ll a,b,c,n;
        cin>>a>>b>>c>>n;

        vector<ll> arr(n+1);
        arr[0] = 0;
        arr[1] = a;
        arr[2] = b;
        arr[3] = c;
        for(ll i = 4;i<=n;i++)
        {
            arr[i] = (arr[i-3]+arr[i-2]+arr[i-1]) % mod;
        }
        cout<<arr[n] % mod<<"\n";

    }

    return 0;
}