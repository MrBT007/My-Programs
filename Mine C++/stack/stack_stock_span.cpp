// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

vector<int> stockspan(vector<int> prices)
{
    vector<int> ans;
    stack<pair<int, int>> st;
    for (int i = 0; i < prices.size(); i++)
    {
        int days = 1;
        while (!st.empty() and st.top().first <= prices[i])
        {
            days += st.top().second;
            st.pop();
        }
        st.push(make_pair(prices[i], days)); // st.push({prices[i],days});
        ans.push_back(days);
    }
    return ans;
}

int main()

{
    FASTIO
    vector<int> v = {100, 80, 60, 70, 60, 75, 85};
    vector<int> result = stockspan(v);
    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}