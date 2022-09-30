// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string keywordArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypadString(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << "\n";
        return;
    }

    char ch = s[0];
    string code = keywordArr[ch - '0'];
    string restOfString = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypadString(restOfString, ans + code[i]);
    }
}
int main()
{
    string n;
    cin>>n;
    keypadString(n,"");
    return 0;
}