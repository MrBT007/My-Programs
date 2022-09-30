// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

int trappingWater(vector<int> height)
{
    int n = height.size();
    int l = 0, r = n - 1, leftmax = 0, rightmax = 0, ans = 0;
    while (l <= r)
    {
        if (height[l] <= height[r])
        {
            if (height[l] >= leftmax) // update leftmax
            {
                leftmax = height[l];
            }
            else // jo cuurent block ni height leftmax karta nani hoy eno matlab tya water store thase
            {
                ans += leftmax - height[l]; // ane te water ni height aa formula par thi male
            }
            l++;
        }
        else
        {
            if (height[r] >= rightmax)
            {
                rightmax = height[r];
            }
            else
            {
                ans += rightmax - height[r];
            }
            r--;
        }
    }
    return ans;
}

int main()

{
    FASTIO
    vector<int> block = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trappingWater(block);

    return 0;
}