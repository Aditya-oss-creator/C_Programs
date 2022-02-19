#include <stdio.h>

int main()
{
    int a = 30;
    int *ptr = NULL; // it print its   default value 0
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is NULL pointer and cannnot be dereferenced\n");
    }
    return 0;
}