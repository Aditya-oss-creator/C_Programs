#include <stdio.h>

int sum(int a,int b)
{
        return a + b;
}
 
int main()
{
    printf("The sum  is: %d\n",sum(4,5));
    int (*fptr)(int, int);  //declaring a function pointer
    fptr = &sum;             //creating a function pointer
    int d = (*fptr)(4,6);   //derefrencing a function pointer
    printf("The value of d is: %d\n",d);
    return 0;
}