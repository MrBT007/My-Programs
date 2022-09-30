// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

void countSort(int arr[] , int n)
{
    int max = *max_element(arr,arr+n);

    int countArr[max] = {0};

    for (int i = 0; i < n; i++)
    {
        countArr[arr[i]]++;
    }

    for (int i = 1; i <= max ; i++)
    {
        countArr[i]+=countArr[i-1];
    }

    int outputArr[n];

    for (int i = n-1; i >=0; i--)
    {
        outputArr[--countArr[arr[i]]] = arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = outputArr[i];
    }
      
}

int main()

{
    FASTIO

    int n;
    cin>>n;
    int arr[n] ;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    countSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;
}