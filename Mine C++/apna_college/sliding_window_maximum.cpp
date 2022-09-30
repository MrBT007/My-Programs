// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

int main()

{
    FASTIO
    int n, k;
    cin >> n >> k;
    int a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    deque<int> dq(k);
    for (i = 0; i < k; i++)
    {
        while ((!dq.empty() && a[i] >= a[dq.back()]))
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for (; i < n; i++)
    {
        cout << a[dq.front()] << " ";

        while ((!dq.empty()) && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while ((!dq.empty()) && a[i] >= a[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout << a[dq.front()];

    return 0;
}