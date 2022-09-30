// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void substring(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << "\n";
        return;
    }

    char ch = s[0];
    string restOfString = s.substr(1);

    int code = ch;
    substring(restOfString, ans);
    substring(restOfString, ans + ch);
    substring(restOfString, ans + to_string(code));
}

int main()
{
    string s;
    cin >> s;
    substring(s, "");

    return 0;
}