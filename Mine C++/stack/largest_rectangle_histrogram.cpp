// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

int get_max_area(vector<int> a)
{
    int n = a.size(), ans = 0, i = 0;
    stack<int> st;
    a.push_back(0);
    while (i < n)
    {
        while (!st.empty() and a[st.top()] > a[i])
        {
            int t = st.top();
            int h = a[t];
            st.pop();
            if (st.empty())
            {
                ans = max(ans, h * i); // darek ek stambh ni height
            }
            else
            {
                int len = i - st.top() - 1;
                ans = max(ans, h * len); // kya sudhi aavda mota stambh cover thaay che teni limit
                                         // means ahiya 5,6 jema 6 ma 5 jetli heght to che j etle 5 na 2 stambh thaya
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main()

{
    FASTIO
    vector<int> a = {2, 1, 5, 6, 2, 3};
    cout << get_max_area(a);
    return 0;
}