// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout<<"Enter number"<<"\n";
    cin >> n;
    int count = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j <= n/2; j++)
        {
            if (i>=1 && j >=1 && i + j == n/2 && i != j && i<j)
            {
                count += 1;
                continue;
            }
        }
    }
    cout << count << "\n";
    return 0;
}