// Name : Bhut Tushar
// This program finds the modulo of higer factorial
//Here M =47
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int M =47;
    long long fact = 1;
    for (int i = 2; i <=n; i++)
    {
        fact = (fact * i)%M;
    }
    cout<<fact;
    
    return 0;
}