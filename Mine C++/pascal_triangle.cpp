// Name : Bhut Tushar
/*
    Pascal Triangle

    0C0
    1C0 1C1
    2C0 2C1 2C2
    3C0 3C1 3C2 3C3
    4C0 4C1 4C2 4C3 4C4
    5C0 5C1 5C2 5C3 5C4 5C5
    

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(j) * factorial(i - j)) << " ";
        }
        cout << "\n";
    }

    return 0;
}