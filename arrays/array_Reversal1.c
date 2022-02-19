#include <stdio.h>

insertElementInArray()
{
    
}
void rev_Array(int arr[],int len)
{
    int temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
    printf("\nReversed Array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n,len;
    printf("Enter no. of elements in array youn want: ");
    scanf("%d",&n);

    int array[n];
    len = sizeof(array) / sizeof(int);


    for (int i = 0; i < n; i++)
    {
        printf("Enter index %d value ",i);
        scanf("%d",&array[i]);
    }

    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }

    rev_Array(array,len);

    return 0;
}