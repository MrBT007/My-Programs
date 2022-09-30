// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int num;
    cin >> num;
    int flag = 0;
    if (num == 1)
    {
        cout << "Prime";
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "NOT PRIME\n";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "PRIME\n";
    }

    return 0;
}