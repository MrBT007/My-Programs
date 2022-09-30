// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string moveAllx(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveAllx(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{
    string s;
    cin >> s;
    cout << moveAllx(s);

    return 0;
}