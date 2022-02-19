#include <stdio.h>
#include <stdlib.h>

int avg(int x, int y)
{
    return (x + y)/2;
}

void greetGaAndExecute(int (*fptr)(int , int ))
{
    int a, b;
    printf("Enter value of a\n");
    scanf("%d", &a);
    printf("Enter value of b\n");
    scanf("%d", &b);

    printf("Good Afternoon User\n");
    printf("The average is %d\n", fptr(a,b));
}

int main()
{
    int (*ptr)(int, int);
    ptr = avg;
    greetGaAndExecute(ptr);
    return 0;
}