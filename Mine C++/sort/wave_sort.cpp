// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

void waveSort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2) // i+=2 etla mate ke aapne i-1 and i+1 be number check karie chie etle i+1 + 1 num thi pachu check karvanu
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2) // n-2 etla mate kem k aapne n-1 sudhi j compare karvana chie .. kem k n-2 number che j nai
                                               // etle jo n-2 condition na aapie to error aave
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()

{
    FASTIO
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    waveSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*

3       7       6       5

    1       4       2

ahiya joi sakay che k  3 motu pachi 1 nanu pachi 7 motu pachi 4 nanu em ek prakar no wave bane che

time complexity:

aapne ahiya for loop ma ek saathe 2 elements ne cover karie chie etle O(n/2) ~ O(n) 
*/