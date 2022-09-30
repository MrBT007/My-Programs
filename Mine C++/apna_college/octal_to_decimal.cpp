// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int octalToDecimal(int n)
{
    int ans = 0;
    int temp = 1;
    while (n > 0)
    {
        int reminder = n % 10;
        ans += temp * reminder;
        temp *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << octalToDecimal(n);
    return 0;
}