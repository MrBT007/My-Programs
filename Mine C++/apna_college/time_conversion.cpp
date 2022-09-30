/*
Sample Input 0

07:05:45PM
-----------------
Sample Output 0

19:05:45
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string outputstr = s.substr(0, 8);
    string ampm = s.substr(s.length() - 2);
    string hourstr = s.substr(0, 2);
    if (ampm == "PM" && hourstr != "12")
    {
        int hour = stoi(hourstr);
        hour = hour + 12;
        string hr = to_string(hour);
        outputstr[0] = hr[0];
        outputstr[1] = hr[1];
    }
    else if (ampm == "AM" && hourstr == "12")
    {
        outputstr[0] = outputstr[1] = '0';
    }

    cout << outputstr;
    return 0;
}
