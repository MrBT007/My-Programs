// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' or s[i] == '[' or s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (!st.empty() and st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() and st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ')')
        {
            if (!st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
       
    }
     if (!st.empty())
        {
            return false;
        }
        return ans;
}

int main()

{
    FASTIO
    string s = "((";
    if (isValid(s))
    {
        cout << "String is Valid";
    }
    else
    {
        cout << "String isn't Valid";
    }

    return 0;
}