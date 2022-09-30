// Name : Bhut Tushar

#include <bits/stdc++.h>

using namespace std;

void dnfSort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
}

int main()

{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    dnfSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
DNF : Dutch National flag 

    0 -> red colour
    1 -> white colour
    2 -> blue colour

ahiya 3 pointer che je low , mid , high che .. tema mid and low initialy 0 hoy 
and high array ni last number ne point kare .
jo mid 0 hoy to mid and low index na array ne swap karvanu ane mid++ and low++ karvanu

jo mid 1 hoy to khlai mid++ karvanu

jo mid 2 hoy to high and mid index na array element ne swap karvanu and high-- karvanu

ahiya darek execution ma kaa to mid++ and high-- thaay che 
etle teni time complexity O(n) thaay
*/