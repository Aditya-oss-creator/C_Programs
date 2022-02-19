#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 2, c = 2;
    int m1[r][c];
    int m2[r][c];
    int addition[r][c];
    int subtraction[r][c];

    printf("Enter Values of Matrix1\n");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("row %d column %d: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nEnter Values of Matrix2 ");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("row %d column %d: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    for (int i = 1; i <= r; i++)
    {

        for (int j = 1; j <= c; j++)
        {
            addition[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            subtraction[i][j] = m1[i][j] - m2[i][j];
        }
    }

    printf("\nAddition: \n");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", addition[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction: \n");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", subtraction[i][j]);
        }
        printf("\n");
    }

    return 0;
}