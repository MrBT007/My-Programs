/*
    ॐ श्री गणेशाय नम:
    ॐ नमः शिवाय
    જય ભૂત દાદા

    Name : Bhut Tushar
*/

#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define sz size()
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define mod 1000000007
#define all(temp1) (temp1).begin(), (temp1).end()
#define SORT(v) sort(all(v))
#define REVSORT(v) sort(all(v), greater<int>())
#define MAX(v) max_element(all(v))
#define MIN(v) min_element(all(v))
#define rep(from, to) for (int i = from; i <= to; i++)
#define rep_back(from, to) for (int i = from; i >= to; i--)
#define take(v) rep(0, v.size()) cin >> v[i];
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

void google(int i)
{
    cout << "Case #" << i << ": ";
}

/* ========== YOUR CODE HERE ========= */

int arra[1000001],bbbba[1000001],test,n,temp1,temp2;

int main()
{
    FASTIO;

    cin >> test;
    while (test--)
    {
        cin >> n;
        temp1 = 1;
        temp2 = 1;
        for (int i = 1; i <= 2 * n; ++i)
            if (i > n)
                cin >> bbbba[i - n];
            else
                cin >> arra[i];
        for (int i = 1, p = 2; i <= n; ++i, p++)
        {
            if (p == n + 1)
                p = 1;
            if (arra[i] > bbbba[i] || ((arra[i] != bbbba[i]) && (bbbba[i] - 2 >= bbbba[p])))
            {
                puts("NO");
                temp1 = 0;
                break;
            }
        }
        for (int i = 1; i <= n; ++i)
        {
            if (arra[i] != bbbba[i] + 1)
                temp2 = 0;
        }
        if (temp2)
        {
            temp1 = 0;
            puts("NO");
            break;
        }
        if (temp1)
            puts("YES");
    }

    return 0;
}