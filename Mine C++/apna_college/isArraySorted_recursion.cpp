// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sorted(int a[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool prevsArray = sorted(a + 1, n - 1);

    return (a[0] < a[1] && prevsArray);
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
    cout << sorted(a, n);
    return 0;
}