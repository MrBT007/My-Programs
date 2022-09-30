// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

bool three_sum(vector<int>a,int t)
{
    int low , high;
    sort(a.begin(), a.end());
    bool ans = false;
    for (int i = 0; i < a.size()-2; i++)
    {
        low = i + 1;
        high = a.size() - 1;
        while (low < high)
        {
            int current = a[i] + a[low] + a[high];
            if (current == t)
            {
                return true;
            }
            if (current < t)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    return false;
}

int main()

{
    FASTIO
    int n;
    cin >> n;
    int t;
    cin >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<three_sum(a,t);
    return 0;
}