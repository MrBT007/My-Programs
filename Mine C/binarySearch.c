#include <stdio.h>

int binarySearch(int arr[],int low,int high,int key)
{
    if(low>high)return -1;
    int mid = (low+high)/2;

    if(arr[mid] == key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
        low = mid+1;
        return binarySearch(arr,low,high,key);
    }
    else
    {
        high = mid-1;
        return binarySearch(arr,low,high,key);
    }

}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Number to find\n");
    int find;
    scanf("%d",&find);
    
    printf("Element is found at Index %d",binarySearch(arr,0,n,find));
}