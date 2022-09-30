// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int addition(int n)
{
    if (n == 0)
    {
        return n;
    }
    else if (n == 1)
    {
        return n;
    }
    else
    {
        return n + addition(n - 1);
    }
}

int main()
{
    int num;
    cin >> num;
    cout << addition(num);

    return 0;
}