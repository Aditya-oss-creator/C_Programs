#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter no.of elements in Array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray Before Removing Duplicates: ");
    for (int i = 0; i < n ; i++)
        printf("%d ", arr[i]);

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n-1; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = arr[j + 1];
                count++;
            }
        }
    }



    printf("\nArray after Removing Duplicates: ");
    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
    printf("count: %d", count);
    return 0;
}