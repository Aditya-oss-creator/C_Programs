#include <stdio.h>

void swap(int* a,int* b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    
}
int main()
{

    int a = 2, b = 3;
    printf("The value of a is %d and value of b is %d\n", a, b);
    swap(&a, &b);
    printf("After swapping the value of a is %d and value of b is %d ", a, b);
    return 0;
}
