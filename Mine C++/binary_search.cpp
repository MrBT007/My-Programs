// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int num, int key)
{
    int startingpoint = 0;
    int endingpoint = num;

    while (startingpoint <= endingpoint)
    {
        int midpoint = (startingpoint + endingpoint) / 2;

        if (arr[midpoint] == key)
        {
            return midpoint;
        }
        else if (arr[midpoint] > key)
        {
            endingpoint = midpoint - 1;
        }
        else
        {
            startingpoint = midpoint + 1;
        }
    }
    return -1;
}

int main()
{
    int num;
    cin >> num;

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << binarySearch(arr, num, key) << "\n";

    return 0;
}