// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

int main()

{
    FASTIO
    int t;cin>>t;
    while (t--)
    {
        long long even=0,odd=0;
        long long n;cin>>n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        long long eve = n/2;
        long long od = n/2;
        if(n%2 == 1)
        {
            od++;
        }
        cout<<min(od,even)+min(eve,odd)<<"\n";       
    }
    
    return 0;
}