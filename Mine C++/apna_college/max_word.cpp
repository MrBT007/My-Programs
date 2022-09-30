// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char a[n + 1];
    cin.getline(a, n);
    cin.ignore();

    int i = 0;
    int currentLen = 0, maxLen = 0;

    while (1)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            if (currentLen > maxLen)
            {
                maxLen = currentLen;
            }
            currentLen = 0;
        }
        else
        {
            currentLen++;
        }

        if (a[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxLen << "\n";

    return 0;
}