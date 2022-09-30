// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPow2(int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    int n;
    cin >> n;

    cout << isPow2(n);
    return 0;
}

/*
    Inshort : n & (n-1) ==> 0 hoy to te pow of 2 hoy
    8 --> 1000
    7 --> 0111 ==> right most 1 (included) pachi na badha bits flip thai jaay

    6 --> 0110
    5 --> 0101

    1 0 0 0
    0 1 1 1
   ---------
    0 0 0 0  ==> jo badha 0 hoy to te pow of 2 hoy 

    ahiya jo 0 aave to tenu not ! etle 1 return thaay and jo koi alag aankdo aave to 0 return thaay

*/