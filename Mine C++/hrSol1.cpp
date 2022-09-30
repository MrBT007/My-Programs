
#include <bits/stdc++.h>
using namespace std;

int sumDigitSquare(int n)
{
    int sq = 0;
    while (n) {
        int digit = n % 10;
        sq += digit * digit;
        n = n / 10;
    }
    return sq;
}
 
bool check(int n)
{
    
    while (1) {

        if (n == 1)
            return true;
 
        n = sumDigitSquare(n);

        if (n == 4)
            return false;
    }
 
    return false;
}
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
         if (check(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
   
    return 0;
}