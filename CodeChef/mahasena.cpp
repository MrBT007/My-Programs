// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

int main()

{
    FASTIO
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    if (n - count >= count)
    {
        cout << "NOT READY";
    }
    else
    {
        cout << "READY FOR BATTLE";
    }

    return 0;
}