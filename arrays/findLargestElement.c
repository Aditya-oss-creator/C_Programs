#include <stdio.h>

int largestElementInArray(int arr[],int n)
{
    int max = 0;
 for (int i = 0; i < n; i++)
    {
        printf("Enter index %d value: ", (i + 1));
        scanf("%d", &arr[i]);
    }
     for (int i = 0; i < n ; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    arr[0] = 555;   //change in here will change in real array because we pass base address of original array
    return max;
}
int main()
{
    int n,max;
    printf("Enter no. of elements you want in array: ");
    scanf("%d", &n);
    int arr[n];
    max = largestElementInArray(arr,n);
    printf("The largest element in array is: %d\n", max);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d in array is: %d\n",(i+1),arr[i]);
    }
    

    return 0;
}