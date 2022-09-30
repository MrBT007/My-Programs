// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void unique(int a[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ a[i];
    }
    int setbit = 0;
    int pos = 0;
    int tempxor = xorSum;
    while (setbit != 1)
    {
        setbit = xorSum & 1;
        pos++;
        xorSum = xorSum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(a[i], pos - 1))
        {
            newxor = newxor ^ a[i];
        }
    }
    cout << newxor << "\n";
    cout << (tempxor ^ newxor)<<"\n";
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unique(a, n);
    return 0;
}