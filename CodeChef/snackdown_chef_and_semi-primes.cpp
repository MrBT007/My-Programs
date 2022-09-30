// Name : Bhut Tushar

#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

/* ========== YOUR CODE HERE ========= */

bool check(int n)
{
    int i ,num;
    vector<int>v;
    for(num = 2; num<=n; num++)
    {
        for(i = 2;i<=(num/2); i++)
        {
            if(num % i ==0)
            {
                i = num;
                break;
            }
        }
        if(i != num)
        {
            v.push_back(num);
        }
    }
    for(auto j:v)
    {
        cout<<j<<" ";
    }
    cout<<"\n";

    for(int j = 0;j<v.size();j++)
    {
        for(int k = 0;k<v.size();k++)
        {
            for(int l = 0;l<v.size();l++)
            {
                for(int m = 0;m<v.size();m++)
                {
                    if(v[j] != v[k] != v[l] != v[m])
                    {
                        if((v[j]*v[k] + v[l]*v[m]) == n)
                        {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}

int main()

{
    FASTIO;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(check(n))
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}