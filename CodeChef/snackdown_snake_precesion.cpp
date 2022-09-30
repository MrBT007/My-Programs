// Name : Bhut Tushar

#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

/* ========== YOUR CODE HERE ========= */

bool check(string s, int n)
{
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        // if(s[i] == '.')
        // {
        //     continue;
        // }
        if (s[i] == 'H')
        {
            if(st.empty())
                st.push(s[i]);
            else
                return false;
        }
        if (s[i] == 'T')
        {
            if(st.empty())
                return false;
            else if (st.top() == 'H')
            {
                while (!st.empty())
                {
                    st.pop();
                }
            }
        }
    }
    if (!st.empty())
    {
        return false;
    }
    return true;
}

int main()

{
    FASTIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (check(s, n))
            cout << "Valid\n";
        else
            cout << "Invalid\n";
    }
    return 0;
}