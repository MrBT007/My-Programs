
#include <bits/stdc++.h>
using namespace std;

int adjacent(string str)
{
    int count = 0;
    int output;
    for (int j = 0; j < str.size(); j++)
    {
        if (str[j] == str[j + 1])
        {
            count += 1;
        }
    }
    output = str.size() - count;
    return output;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int sizestr;
        cin >> sizestr;
        string str;
        cin >> str;
        cout << adjacent(str) << "\n";
    }
}