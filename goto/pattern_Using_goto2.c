#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1, j, k;

row:
    if (i <= 5)
    {
        j = 1, k = 5;
        goto space;
        return 0;
    

space:

    if (k >= i)
    {
        printf(" ");
        k--;
        goto space;
    }
    // i++;
    goto column;
    return 0;

column:

    if (j <= i)
    {
        printf("* ");
        j++;
        goto column;
    }
    i++;
    printf("\n");
    goto row;

    }
}
