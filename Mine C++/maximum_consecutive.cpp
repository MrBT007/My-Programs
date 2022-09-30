// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

int main()

{
    FASTIO
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    int j = 0, ans = 0, zerocount = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            zerocount++;
        }
        while (zerocount > k)
        {
            if (a[j] == 0)
            {
                zerocount--;
            }
            j++;
        }
        ans = max(ans, i - j + 1);
    }
    cout << ans;
    return 0;
}

/*

j = 0  \  ans = 0  \  zerocount = 0

    1  1  1  0  0  0  1  1  1  1  0
    0  1  2  3  4  5  6  7  8  9  10

i = 0,j = 0,ans = 1,zerocount = 0

i = 1,j = 0,ans = 2,zerocount = 0

i = 2,j = 0,ans = 3,zerocount = 0

i = 3,j = 0,ans = 4,zerocount = 1

i = 4,j = 0,ans = 5,zerocount = 2

i = 5,j = 0,ans = 5,zerocount = 3 => i = 5,j = 1,ans = 5,zerocount = 3 => i = 5,j = 2,ans = 5,zerocount = 3 => i = 5,j = 3,ans = 5,zerocount = 2 => i = 5,j = 4,ans = 5,zerocount = 2

ahiya upar na step ma jya sudhi a[j] = 0 na aave tya sudhi zerocount>k rahe .. ane jyare a[j] = 0 aave tyare zerocount>k false thaay

i = 6,j = 4,ans = 5,zerocount = 2

i = 7,j = 4,ans = 5,zerocount = 2

i = 8,j = 4,ans = 5,zerocount = 2

i = 9,j = 4,ans = 6,zerocount = 2

i = 10,j = 4,ans = 6,zerocount = 3 => i = 10,j = 5,ans = 6,zerocount = 2 


now ans will be printed

*/