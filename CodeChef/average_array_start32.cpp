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
    Logic:

    n = 5 and x = 3
            3-2 + 3-1 + 3 + 3+1 + 3+2 ==> 1 + 2 + 3 + 4 + 5 ==> 15 mean(15) = 3

            if(n is odd)
            i.e x-2 + x+2 + x-1 + x+1 + x
                   2x    +    2x    + x  ==> 5x /5 = x
            
            if(n is even)
                x-1 + x+1 + x-2 + x+2 + .... x-n + x+n

*/

int main()
{
    FASTIO;
    int t;cin>>t;
    for(int i = 0;i<t;i++)
    {
        int n,x;cin>>n>>x;
        if(n%2)
        {
            cout<<x<<" ";
            for(int i = 1;i<=n/2;i++)cout<<x-i<<" "<<x+i<<" ";
        }
        else
        {
            for(int i = 1;i<=n/2;i++)cout<<x-i<<" "<<x+i<<" ";
        }
        cout<<"\n";
        // google(i);
    }

    return 0;
}