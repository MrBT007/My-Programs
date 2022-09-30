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

int main()
{
    FASTIO;
    int t;cin>>t;
    for(int j = 0;j<t;j++)
    {
        int n,k;cin>>n>>k;
        if(k%4 == 0)cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(int i = 1;i<=n;i+=2)
            if(((i+k)*(i+1))%4 == 0)
            {
                cout<<i<<" "<<i+1<<"\n";
            }
            else cout<<i+1<<" "<<i<<"\n";
        }
        // google(i);
    }

    return 0;
}