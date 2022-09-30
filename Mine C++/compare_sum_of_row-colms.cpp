// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>

class Solution
{
public:
    int sumRowCollm(int row, int collum, int A)
    {
        int i = 0;
        while (i < min(row, collum))
        {
            int sumr = 0, sumc = 0;
            int j = 0, k = 0;
            for (j; j < row; j++)
            {
                sumr += A[j][i];
            }
            for (k; k < collum; k++)
            {
                sumc += A[i][k];
            }
            if (sumr != sumc)
            {
                return 0;
                i++;
            }
            else
                return 1;
        }
    }
};

using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int A[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    Solution ob;
    cout<<ob.sumRowCollm(N,M,A);

    return 0;
}