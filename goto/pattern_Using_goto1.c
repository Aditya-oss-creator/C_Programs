#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;

row:
    int j=1;
    if (i <= 5)
    {
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
