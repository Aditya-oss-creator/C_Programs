#include <stdio.h>

void full_Pyramid_Of_Numbers(int r,int c)
{
    int i, space, k;
    for (i = 1; i <= r; i++,k=0)
    {
        for (space = 1; space <= c - i; space++)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("%d",k);
            k++;
        }
        
        
    }
}

void full_Pyramid(int r, int c)
{
    int i, k = 0, space;
    printf("Full Pyramid\n");
    for (i = 1; i <= r; ++i, k = 0)
    {
        for (space = 1; space <= c - i; ++space)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }
}

void half_Pyramid_Of_Alphabets(int r, int c)
{
    printf("Half Pyramid Of Alphabets\n");
    // int count=65;
    char ch = 'A';
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", ch); // printf("%c ",count);
        }
        ch++; // count++;
        printf("\n");
    }
}

void inverted_half_Pyramid_Of_Alphabets(int r, int c)
{
    printf("Inverted Half Pyramid Of Alphabets\n");
    // int count=65;
    char ch = 'A';
    for (int i = r; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", ch); // printf("%c ",count);
        }
        ch++; // count++;
        printf("\n");
    }
}

void half_Pyramid_Of_Numbers(int r, int c)
{
    printf("Half Pyramid Of Numbers\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 1; j <= i + 1; ++j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void inverted_half_Pyramid_Of_Numbers(int r, int c)
{
    printf("Inverted Half Pyramid Of Numbers\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = c; j > i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void half_Pyramid(int r, int c)
{
    printf("Half Pyramid\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void inverted_half_Pyramid(int r, int c)
{
    printf("Inverted Half Pyramid\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = c; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int row, column;

    printf("Enter the row number you want: ");
    scanf("%d", &row);
    printf("Enter the column number you want: ");
    scanf("%d", &column);

    // half_Pyramid(row,column);
    // inverted_half_Pyramid(row,column);
    // half_Pyramid_Of_Numbers(row,column);
    // inverted_half_Pyramid_Of_Numbers(row,column);
    // half_Pyramid_Of_Alphabets(row,column);
    // inverted_half_Pyramid_Of_Alphabets(row,column);
    // full_Pyramid(row, column);
              full_Pyramid_Of_Numbers(row,column);


    return 0;
}
