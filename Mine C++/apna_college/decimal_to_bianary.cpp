// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    while (n>0)
    {
        if (n %2 == 0)
        {
            cout<<0;
        }
        if(n % 2 == 1)
        {
            cout<<1;
        }
        n /= 2 ;
    
    }
    
}

int main()
{
    int n;
    cin>>n;
    cout<<decimalToBinary(n);
    return 0;
}