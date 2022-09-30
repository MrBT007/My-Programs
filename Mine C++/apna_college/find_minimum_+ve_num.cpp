// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int N = 1e6 + 2;
    // ahiya sauthi moto array lidho jema darek index ne false kari
    bool check[N];

    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        // ahiya jo koi number >=0 hoy to te !! number ni index par !! true karo ..
        if (a[i] >= 0)
        {
            check[a[i]] = true;
        }
    }
    int ans = -1;
    // pachi array ma je pehlo false hoy te j missing number hoy
    for (int i = 0; i < n; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}