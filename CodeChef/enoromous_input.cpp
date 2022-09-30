// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

int main()

{
    FASTIO
    int n,k;cin>>n>>k;
    int count = 0;
    for(int i = 0 ; i<n ; i++)
    {
        long long a;cin>>a;
        if(a%k == 0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}