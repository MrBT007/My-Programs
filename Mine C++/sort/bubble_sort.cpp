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

    int counter = 1; // here we have to iterate the code for n-1 times ..
                    // because after every iteration array is sorted from last .. thats why we dont have to change it
    while (counter < n)
    {
        for(int i = 0 ; i< n - counter ; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter ++ ;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}