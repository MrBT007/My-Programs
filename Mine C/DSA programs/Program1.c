// Write a program to multiply two 2D arrays and store result in third 2D array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], b[10][10], mul[10][10], row1, row2, column1, column2;
    printf("Enter No of Raw of Matrix 1 = ");
    scanf("%d", &row1);
    printf("Enter No of Column of Matrix 1 = ");
    scanf("%d", &column1);

    printf("Enter Matrix 1's Elements\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter No of Raw of Matrix 2 = ");
    scanf("%d", &row2);
    printf("Enter No of Column of Matrix 2 = ");
    scanf("%d", &column2);

    if (column1 != row2)
    {
        printf("Multiplication is not Possible\n");
    }
    else
    {
        printf("Enter Matrix 2's Elements\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        printf("*** Multiplication of both Matrix ***\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < column1; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}