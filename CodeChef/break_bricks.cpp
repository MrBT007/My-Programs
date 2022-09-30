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
        int s, w1, w2, w3;
        cin >> s >> w1 >> w2 >> w3;
        int sum = w1 + w2 + w3;
        if (sum <= s)
        {
            cout << "1\n";
        }
        else
        {
            int sum2 = w1 + w2;
            int sum3 = w2 + w3;
            if (sum2 <= s or sum3 <= s)
            {
                cout << "2\n";
            }
            else
            {
                cout << "3\n";
            }
        }
    }
    return 0;
}