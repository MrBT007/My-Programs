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
        int curr = 0;
        long long sum = 0;
        int n, q;
        cin >> n >> q;
        while (q--)
        {
            int Fi, Di;
            cin >> Fi >> Di;
            sum = sum + abs(curr - Fi) + abs(Fi - Di);
            curr = Di;
        }
        cout << sum << "\n";
    }
    return 0;
}