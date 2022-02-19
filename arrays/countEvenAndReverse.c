/*WAP that takes 10 values in array & count even numbers  & print it ,if counting of odd no. is more than 5 then display array elements in reverse order*/

#include <stdio.h>

int main()
{
    int arr[10], i, even = 0, odd;
    for (i = 0; i < 10; i++)
    {
        printf("value %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
    }

    odd = 10 - even;
    printf("even: %d\n", even);
    printf("odd: %d\n", odd);
    if (odd > 5)
        for (i = 9; i >= 0; i--)
            printf("%d ", arr[i]);
    else
        for (i = 0; i < 10; i++)
            printf("%d ", arr[i]);
    return 0;
}