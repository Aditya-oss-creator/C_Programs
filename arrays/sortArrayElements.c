#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 50, 2, 36, 90, 1, 500};
    int temp = 0;
    for (int i = 0; i < 7 - 1; i++)
    {
        for (int i = 0; i < 7 - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }


for (int i = 0; i < 7; i++)
{
    printf("%d ",arr[i]);
}

    return 0;
}