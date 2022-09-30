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
    for(int i = 0;i<t;i++)
    {
        int n;cin>>n;
        if(n&1)
        {
            if(n == 1 or n == 3)cout<<-1;
            else
            {
                cout<<"4 5 1 3 2 "; // this is the only case for every odd number greater than 5 .. to be a good permutation
                int c = n;
                for(int i = 1;i<=n-5;i++)
                {
                    cout<<c--<<" ";
                }
            }
        }
        /*
            n = 8

            8 7 6 5 4 3 2 1
            1 2 3 4 5 6 7 8    
            ---------------
            7 5 3 1 1 3 5 7 

            for evert Pi --> Pi != i
            
            here every pair number is cancel out (because of Xor)

            and for number = 5
            we found one permutaion which is a good

            4 5 1 3 2
            1 2 3 4 5
            ---------
            3 3 2 1 3 ==> xor equals to 0

            and for odd number greater than 5 .. we put first this permutation and we know remaining total number is even
            example 9 : 9 - 5 = 4
                    11 : 11 - 5 = 6

            and for even number we are printing it backwards 

        */
        else
        {
            for(int i = n;i>=1;i--)
            cout<<i<<" ";
        }
        cout<<"\n";
        // google(i);
    }

    return 0;
}