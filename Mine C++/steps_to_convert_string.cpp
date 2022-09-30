// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Tushar";
    string str2 = "sharTu";
    int count = str.size() - 1;
    int j = 0;

    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] != str2[j])
        {
            continue;
        }

        else
        {
            j++;
            count--;
        }
    }

    cout << count << endl;
    return 0;
}