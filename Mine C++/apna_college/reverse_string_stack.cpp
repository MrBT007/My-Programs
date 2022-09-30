// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

void reverseString(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
}

int main()

{
    FASTIO
    string s = "Hey! How are you?";
    reverseString(s);
    return 0;
}