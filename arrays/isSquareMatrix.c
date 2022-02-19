// WAP to check whether given Square Matrix is symmetric or not
/*
A Square Matrix is said to be symmetric if it is equal to it's transpose.
Transpose of a matrix is achieved by exchanging indices of rows and columns.
Transpose is only defined for a square matrix.
*/
#include <stdio.h>
#include <stdlib.h>

void isSquareMatrix(int row, int column)
{
    int arr1[row][column], arr2[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("row %d column %d: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Original Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }

    printf("Transpose Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr1[i][j] != arr2[i][j])
                break;
        }
        printf("\n\nMatrix is Symmetric\n\n");
        break;
    }
}
#include <stdio.h>

int main()
{
    int row, column;
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    printf("Enter no. of columns: ");
    scanf("%d", &column);

    isSquareMatrix(row, column);
    return 0;
}