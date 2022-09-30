#include<stdio.h>

void insertionSort(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
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
    insertionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}