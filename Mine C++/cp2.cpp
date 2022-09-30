// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    long int a = 100000;
    long int b = 100000;
    int c;
    long int d = a * 1L * b;

    c = a * b;
    
    cout << c << "\n"; // Here expected 10^10 but it is around 10^9 bcoz it is limit of int
    cout << d << "\n"; // Here expected otuput comes 

    return 0;
}