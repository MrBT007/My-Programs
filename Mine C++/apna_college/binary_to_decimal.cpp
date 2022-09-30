// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int temp = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += temp * y;
        temp *= 2;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << binaryToDecimal(n);
    return 0;
}