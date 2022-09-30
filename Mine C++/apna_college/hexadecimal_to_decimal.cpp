// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int temp = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += temp * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += temp * (n[i] - 'A' + 10);
        }
        temp *= 16;
        // Here n[i] will give a character suppose '2' which is store at 2 and '0' which is stored at 0
        // means '2' - '0' --> 2
        // Such as if 'A' - 'A' comes then we have to stored its value as 10 then 10 added
    }
    return ans;
}

int main()
{
    string n;
    cin >> n;
    cout << hexadecimalToDecimal(n);
    return 0;
}