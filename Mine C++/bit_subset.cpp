// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subsets(int a[], int n)
{
    for (int i = 0; i < pow(n, 2); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << a[j] << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    subsets(a, n);
    return 0;
}

/*

i = 0               0 0 0 0
j = 0               0 0 0 1
                   ---------
                    0 0 0 0  ==> false thaay etle if valu statement print na thaay

i = 1               0 0 0 1
j = 0               0 0 0 1
                   ---------
                    0 0 0 1  ==> true thaay and a[j = 0] print thaay means ====> 1

i = 1               0 0 0 1
j = 1               0 0 1 0
                   ---------
                    0 0 0 0  ==> false thaay etle if valu statement print na thaay

i = 2               0 0 1 0
j = 0               0 0 0 1
                   ---------
                    0 0 0 0  ==> false thaay etle if valu statement print na thaay

i = 2               0 0 1 0
j = 1               0 0 1 0
                   ---------
                    0 0 1 0  ==> true thaay and a[j = 1] print thaay means ====> 2

i = 2               0 0 1 0
j = 2               0 2 0 0
                   ---------
                    0 0 0 0  ==> false thaay etle if valu statement print na thaay

i = 3               0 0 1 1
j = 0               0 0 0 1
                   ---------
                    0 0 0 1  ==> true thaay and a[j = 0] print thaay means ====> 1

i = 3               0 0 1 1
j = 1               0 0 1 0
                   ---------
                    0 0 1 0  ==> true thaay and a[j = 1] print thaay means ====> 2

Note : ahiya ek j loop ma print thaay che etle te " 1 2 " hase
Note : ahiya samjava mate j nu loop true thaay tya sudhu j batavyu che pan te n times to chaltu j hoy bas te true na thaay etle print thatu nathi

*/