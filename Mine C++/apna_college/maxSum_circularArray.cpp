// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kadane_algo(int a[], int n)
{
    int currentsum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += a[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxSum = max(currentsum, maxSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //koi case mate kadane algo thi nonwraping sum find karyo (maximum)
    int nonwrapsum = kadane_algo(a, n);
    int wrapSum;

    // aapela array na badha element ne -1 multiply kari ne te array par kadane algo use karvo
    // pachi e algo thi malela sum ne total sum ma add karvo
    // basically eno matlab em k amx sum thava ma je element contiguos rite nade che emne - karva ..
    // pan aapne temni significanse badli che tle temne - karava jai e to te + thai jaay je wrapsum che
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += a[i];
        a[i] = -a[i];
    }

    wrapSum = totalSum + kadane_algo(a, n);

    cout << max(wrapSum, nonwrapsum);

    return 0;
}