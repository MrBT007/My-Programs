// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = 0;     //which are two pointers which iterate over array
    int st = -1, en = -1; //which are the final points from which sum starts
    int sum = 0;

    // aa step jo direct 1 to koi number sudhi ma sum = s thaay te case mate che.
    while (j < n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }

    if (sum == s)
    {
        cout << i + 1 << " " << j << "\n"; // here we were denoting i starts with 1 not 0 and j is not inclusive.
    }

    // aa code jo upar no code fail thay to aa case thaay
    while (j < n)
    {
        sum += a[j]; // here sum is being added to next number in array
        // jo sum  s karta moto thaay to ..
        while (sum > s)
        {
            // ahi starting no number - karvama aave jya sudhi sum>s hoy
            sum -= a[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }

    // here if no subarray found then will print -1 -1 coz its defined before.
    cout << st << " " << en << "\n";

    return 0;
}