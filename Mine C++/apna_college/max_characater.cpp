// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int freq[26]; // a to z 26 character's occurance array

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxFreq = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] >= maxFreq)
        {
            maxFreq = freq[i];
            ans = i + 'a';
        }
    }

    cout << maxFreq << " " << ans << '\n';

    return 0;
}