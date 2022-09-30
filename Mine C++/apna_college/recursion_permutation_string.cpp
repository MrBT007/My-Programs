// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permutationString(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << "\n";
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string restOfString = s.substr(0, i) + s.substr(i + 1); // first is starts from 0 to i (i not included)

        // this is seprating othe character and takes only one character.

        permutationString(restOfString, ans + ch);
    }
}

int main()
{
    string s;
    cin >> s;
    permutationString(s, "");

    return 0;
}