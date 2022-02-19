#include <stdio.h>

int main()
{
    int arr1[5], arr2[5];
    printf("Enter values: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
        arr2[i] = arr1[4 - i];
    }

    printf("Original Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    
    printf("Reversed Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}