// Name : Bhut Tushar

// This is the Kadane's algorithm which gives O(n) complexity.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // ahi dar vakhte ek index of element plus thaay che
        currentSum += a[i];
        if (currentSum < 0)
        {
            // jo koi negative number aave to currentsum ne 0 kai devay kem k koi +ve number to hase j ne (assumption)
            currentSum = 0;
        }
        // pehla maxsum integer ma minimnum number hato have te cuurentSum and maxsum ma maximum number thai gyo che
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum;

    return 0;
}