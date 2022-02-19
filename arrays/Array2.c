// WAP to insert and delete an Element in array
#include <stdio.h>

void insertAnElement(int arr[100], int n)
{
    int index, value;
    printf("Index: ");
    scanf("%d", &index);
    printf("Value: ");
    scanf("%d", &value);

    for (int i = n-1; i >= index; i--)
    {
            arr[i+1] = arr[i];

    }
    arr[index] = value;
    printf("After Insertion:: ");

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void deleteAnElement(int arr[100],int n)
{
     int index, value;
    printf("\nIndex: ");
    scanf("%d", &index);

    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i+1];
    }

    printf("After Deletion: ");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100], n;
    int *ptr = arr;
    printf("Enter no. of elements in an Array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insertAnElement(ptr, n);
    deleteAnElement(ptr,n);

    return 0;
}