// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

int main()

{
    FASTIO
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        while (n % 2 != 1)
        {
            n = n / 2;
        }
        cout << (n - 1) / 2 << "\n";
    }
    return 0;
}