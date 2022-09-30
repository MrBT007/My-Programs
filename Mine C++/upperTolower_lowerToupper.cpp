// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << "Before Converting..."
         << "\n";
    cout << s << "\n";

    // 'a' - 'A' = 32 means a .. A thi 32 digit aagal che . means tene 32 minus karva padse

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
    cout << "After Converting"
         << "\n";
    cout << s << "\n \n";

    // In Built Function

    string s1;
    getline(cin, s1);
    cout << "Before Converting..."
         << "\n";
    cout << s1 << "\n";

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout << "After Converting"
         << "\n";
    cout << s1 << "\n";
    return 0;
}
