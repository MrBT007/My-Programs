// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int tiling(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return tiling(n - 1) + tiling(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << tiling(n);

    return 0;
}

/*
    2xn nu dpsce hoy jema 2x1 ni tiles ketli rite fit thaay te kevanu che
*/