//Create an array of 20 size, stores value & split array into two different arrays and print value

#include <stdio.h>

int main()
{
    int arr[20], arr1[10], arr2[10], i, j;

    for (i = 0; i < 20; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 10; i++)
        arr1[i] = arr[i];

    for (j = 0; j < 10; j++, i++)
        arr2[j] = arr[i];

    printf("Array1: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr1[i]);

    printf("\nArray2: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr2[i]);
    return 0;
}