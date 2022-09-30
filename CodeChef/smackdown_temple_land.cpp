// Name : Bhut Tushar

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

bool check(int arr[], int n)
{
    if(n%2 == 0)
        return false;
    else
    {
        int s = 0, e =n-1 ,count = 1;
        while(s<=e)
        {
            if( arr[s] != count or arr[e] != count)
            {
                return false;
            }
            s++;
            e--;
            count++;
        }
    }
    return true;
}

int main()

{
    FASTIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = check(arr, n);
        if (flag)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}