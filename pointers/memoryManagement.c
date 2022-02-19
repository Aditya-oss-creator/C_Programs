#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr, sum = 0;

    printf("Enter no. of elements in array: ");
    scanf("%d", &n);

    // dynamic memory allocation using malloc()
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) // if empty array
    {
        printf("Error! Memory not allocated\n");
        return 0; // end of program
    }

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
    {
        // storing elements at contiguous memory locations
        scanf("%d", ptr+1); //(ptr + 1) is same as &ptr[i]
        sum = sum + ptr[i]; // ptr[i] is same as *(ptr + i)
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    /*
        freeing memory of ptr allocated by malloc
        using the free() method
    */
    free(ptr);
    return 0;
}