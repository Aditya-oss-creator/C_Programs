#include <stdio.h>
#include <Math.h>

int main()
{
    int arr[] = {1, 2, 3, 40, 5, 8, 9, 100};
    long max = -99999999;
    long min = 999999999;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("max: %d\n", max);
    printf("min: %d", min);

    return 0;
}