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
        int n;cin>>n;
        vector<int>map(200001,0);
        for(int i = 0;i<n;i++)
        {
            int temp;cin>>temp;
            map[temp]++;
        }
        int mx = *max_element(map.begin(),map.end());
        if(mx == n)
        {
            cout<<"0\n";
        }
        else if(mx<=1 and n>=2)
        {
            cout<<"-1\n";
        }
        else 
        cout<<n-mx+1<<"\n";

    }

    return 0;
}