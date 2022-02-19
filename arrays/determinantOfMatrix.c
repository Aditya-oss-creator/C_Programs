#include <stdio.h>

void determinantOfMatrix(int row, int column)
{
    int arr[row][column];
    int determinant, difference = 0;
    ;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("row %d column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The given matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    determinant = arr[0][0] * arr[1][1] - arr[1][0] * arr[0][1];
    printf("\n\nDterminant of 2x2 matrix is : %d - %d =  %d", arr[0][0] * arr[1][1], arr[1][0] * arr[0][1], determinant);
}
int main()
{
    int row, column;

    printf("Enter no. of rows: ");
    scanf("%d", &row);
    printf("Enter no. of columns: ");
    scanf("%d", &column);
    determinantOfMatrix(row, column);
    return 0;
}