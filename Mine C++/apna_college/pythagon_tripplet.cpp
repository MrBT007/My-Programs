// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int checkTripplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int c, b;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
    {
        cout << "Given Value is Pythagon Tripplet";
    }
    else
    {
        cout << "Given Value isn't Pythagon Tripplet";
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    checkTripplet(a, b, c);
    return 0;
}