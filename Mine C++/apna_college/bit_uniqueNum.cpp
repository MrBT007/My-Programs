// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int unique(int a[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ a[i];
    }
    return xorSum;
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
    cout << unique(a, n);
    return 0;
}

/*
    xor ==> 1^1 = 0 , 0^1 = 1 , 0^0 = 0

    xorSum = 0

    a[0] = 2    0 0 0 0
                0 0 1 0
               ---------
                0 0 1 0  updated in xorSum

    a[1] = 4    0 0 1 0
                0 1 0 0
               ---------
                0 1 1 0  updated in xorSum

    a[2] = 6    0 1 1 0
                0 1 1 0
               ---------
                0 0 0 0  updated in xorSum

    a[3] = 3    0 0 0 0
                0 0 1 1
               ---------
                0 0 1 1  updated in xorSum

    . . . . . . . . . . . . . . . . . . . . . 
    . . . . . . . . . . . . . . . . . . . . .  

    a[6] = 2    0 0 0 1
                0 0 1 0
               ---------
                0 0 1 1  updated in xorSum ==> which is 3 (unique)
    
                
*/