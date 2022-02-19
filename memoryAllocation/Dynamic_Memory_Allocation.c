#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // //USE OF MALLOC(Memory Allocation)
    // int *ptr, n;
    // printf("Enter the size of the array you want to create: ");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int)); //create n size of int array and initialize its value from garbage value

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value %d of this array using malloc: ", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++) // go out of 3 gives garbage value
    // {
    //     printf("The value at %d of this array is %d\n", i, ptr[i]);
    // }

    //USE OF CALLOC(Contiguous Allocation)
    int *ptr, n;
    printf("Enter the size of the array you want to create: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int)); //create n size of int array and initialize its value from 0

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d of this array using calloc: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++) // go out of 3 gives garbage value
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    //USE OF REALLOC(Reallocation)
    printf("Enter the size of the new array you want to create: ");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int)); //create n size of int array and initialize its value from 0

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d of new array using realloc: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++) // go out of 3 gives garbage value
    {
        printf("The value at %d of new array is %d\n", i, ptr[i]);
    }

    free(ptr);  //free the variable memory and it can be reused by any other variable

    return 0;
}