// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int ans = 2; // minimum ans
    int pd = arr[1] - arr[0];
    int current = 2; // current means the current value of ans .. which is defined as minimmum
    int j = 2; //because we have dlready disussed upto 1 index

    while (j < n)
    {
        if(pd == arr[j] - arr[j-1])
        {
            current++;
        }
        else
        {
            pd = arr[j] - arr[j-1]; // because after 1 or 2 elements pd will differnt .. thats why we have to update new pd
            current = 2; // if condition not satisfied then we have to define current as first declared
        }
        ans = max(ans,current);
        j++;
    }
    
    cout<<ans;
    
    return 0;
}