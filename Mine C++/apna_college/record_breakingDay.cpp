// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n + 1];
    arr[n] = -1; //last valo element ne check karva mate .. ek vadhare element add karyo je ne -1 dclare karyo kem k last elememt pachi koi element hoy nai

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << "1"<< "\n";
        return 0;
    }

    int counter = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            counter++;
        }
        mx = max(mx, arr[i]);
    }

    cout << counter;

    return 0;
}