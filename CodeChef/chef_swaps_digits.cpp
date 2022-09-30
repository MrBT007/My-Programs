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
        int n1, n2;
        cin >> n1 >> n2;
        int a1 = n1 / 10;
        int a2 = n1 % 10;
        int b1 = n2 / 10;
        int b2 = n2 % 10;

        int maxSum = n1 + n2;
        if (a1 != 0 and b1 != 0)
        {
            int sum1 = (a1 * 10 + b1) + (a2 * 10 + b2);
            int sum2 = (a1 * 10 + b2) + (b1 * 10 + a2);
            int sum3 = (b2 * 10 + a2) + (b1 * 10 + a1);

            maxSum = max(maxSum, sum1);
            maxSum = max(maxSum, sum2);
            maxSum = max(maxSum, sum3);
        }
        else if (a1 == 0 and b1 != 0)
        {
            int sum1 = b1 + (a2 * 10 + b2);
            int sum2 = b2 + (b1 * 10 + a2);

            maxSum = max(maxSum, sum1);
            maxSum = max(maxSum, sum2);
        }
        else if (a1 != 0 and b1 == 0)
        {
            int sum1 = a1 + (b2 * 10 + a2);
            int sum2 = a2 + (a1 * 10 + b2);

            maxSum = max(maxSum, sum1);
            maxSum = max(maxSum, sum2);
        }

        cout << maxSum <<"\n";
    }
    return 0;
}