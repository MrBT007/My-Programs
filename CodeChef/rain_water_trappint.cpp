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
        int n;cin>>n;
        int arr[n];
        for(int i = 0; i<n ; i++)
        {
            cin>>arr[i];
        }
        int i = 0,j = n-1,minBlock,totalWater = 0;
        for(int curr = 0 ; curr<n; curr++)
        {
            if(arr[curr] >= arr[i])
            {
                i = curr;
            }
            minBlock = min(arr[i],arr[j]);
            totalWater += minBlock - arr[curr];
        }
        cout<<totalWater<<"\n";
    }
    
    return 0;
}