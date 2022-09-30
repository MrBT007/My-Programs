// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, key;
    cin >> n >> m >> key;

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int row = 0, col = m - 1;
    bool found = false;
    while (row < n && col >= 0)
    {
        if (a[row][col] == key)
        {
            found = true;
        }
        if (a[row][col] > key)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    if (found)
    {
        cout << "Element Founded"
             << "\n";
    }
    else
    {
        cout << "Element Not Exist"
             << "\n";
    }

    return 0;
}

// ahi aa algo ma aapne badha element check karvana nathi .. jethi aama 1st row na last element or last row na 1st element
// ene select kari code karvo
// means jo choose karela element karta key naani hoy to te j row ma element minus thaay and pachi check thaay
// jo key choose karela element karta moti hoy to te nava row ma shift thaay.