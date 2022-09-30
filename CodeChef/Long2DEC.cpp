/*
    ॐ श्री गणेशाय नम:
    ॐ नमः शिवाय
    જય ભૂત દાદા

    Name : Bhut Tushar
*/

// #include<allGod>
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

int main()

{
    FASTIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m; // n --> Hills | m --> Valley
        string ans = "";
        if (n > m)
        {
            for (int i = 0; i <= m; i++)
            {
                ans += "01";
            }
            int count = 0;
            n -= (m + 1); // needs more Hills
            while (count < n)
            {
                ans += "001";
                count++;
            }
            ans.push_back('0');
        }
        else if (n < m)
        {
            for (int i = 0; i <= n; i++)
            {
                ans += "10";
            }
            m -= (n + 1); // needs more valleys
            int count = 0;
            while (count < m)
            {
                ans += "110"; // this will be considered as valley because 110 1 --> 11 doesn't make sense 101 means a valley
                count++;
            }
            ans.push_back('1');
        }
        else if (n == m)
        {
            for (int i = 0; i <= n; i++)
            {
                ans += "10";
            }
        }
        cout << ans.length() << "\n";
        cout << ans << "\n";
    }

    return 0;
}