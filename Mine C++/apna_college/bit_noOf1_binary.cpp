// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int noOf1s(int n)
{
    int count = 0;
    while (n)
    {
       n = n & (n-1);
       count++; 
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<noOf1s(n);
    return 0;
}

/*
    19 --> 01011
    18 --> 01010

    n = n & (n-1)       0 1 0 1 1
                        0 1 0 1 0
                       -----------
                  n =   0 1 0 1 0

    count = 1

    18 --> 01010
    17 --> 01001

    n = n & (n-1)       0 1 0 1 0
                        0 1 0 0 1
                       -----------
                  n =   0 1 0 0 0

    count = 2

    16 --> 01000
    15 --> 00111

    n = n & (n-1)       0 1 0 0 0
                        0 0 1 1 1
                       -----------
                  n =   0 0 0 0 0

    count = 3

    means n = 19 ma 3 time 1s aave 
*/