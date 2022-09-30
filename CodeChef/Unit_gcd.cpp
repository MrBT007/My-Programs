// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

int main()

{
    FASTIO
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << "1\n1 1 " << endl;
        }
        else if (n == 2)
        {
            cout << "1\n2 1 2" << endl;
        }
        else if (n == 3)
        {
            cout << "1\n3 1 2 3" << endl;
        }
        else
        {
            cout<<n/2<<"\n";
            if (n % 2 == 0)
            {
                for (long long i = 1; i < n; i = i + 2)
                {
                    cout<<"2 "<<i<<" "<<i+1<<"\n";
                }
            }
            else
            {
                cout << "3 1 2 3\n";
                for (long long i = 4; i < n; i = i + 2)
                {
                    cout << "2 " << i << " " << i + 1 << endl;
                }
            }
        }
    }
    return 0;
}