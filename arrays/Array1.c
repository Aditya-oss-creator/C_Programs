//WAP to insert and delete an Element in array
#include <stdio.h>

void insertAnElement(int arr[5], int index, int value)
{
    int arr1[100];
    for (int i = 0; i < 5; i++)
    {
        if (i < index)
        {
            arr1[i] = arr[i];
        }
        else
        {
            arr1[index] = value;
            arr1[i + 1] = arr[i];
        }
    }
    printf("Original Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Changed Array: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr1[i]);
    }
}

void deleteAnElement(int arr[],int index)
{
    int arr1[100];
    for (int i = 0; i < 5; i++)
    if(i < index)
    {
        arr1[i] = arr[i];   
    }
    else
    {
        arr1[i] = arr[i+1]; 
    }

   
    printf("Original Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Changed Array: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr1[i]);
    }
    
}
int main()
{
    int index, value, arr[5] = {56, 58, 21, 30, 5};
    printf("Enter index number: ");
    scanf("%d", &index);
    printf("Enter value: ");
    scanf("%d", &value);
   // insertAnElement(arr, index, value);
    deleteAnElement(arr, index);

    return 0;
}