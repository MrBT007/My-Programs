// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    int nums[100] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (nums[i] == 0)
        {
            for (int j = i * i; j <= n; j+=i)
            {
                nums[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (nums[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << "\n";
}

int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}