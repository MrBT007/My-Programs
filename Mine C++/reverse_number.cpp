// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int num;
    cin >> num;
    int reversenum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        reversenum = reversenum*10 + lastdigit;
        num /= 10 ;
    }
    cout<<reversenum;

    return 0;
}