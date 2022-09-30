// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

int main()

{
    FASTIO
    bool ans = false;
    string s = "(c+(a+b))";
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' or s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                ans = true;
            }

            while (st.top() == '+' or st.top() == '-' or st.top() == '*' or st.top() == '/')
            {
                st.pop();
            }
            st.pop();
        }
    }
    cout << ans;

    return 0;
}