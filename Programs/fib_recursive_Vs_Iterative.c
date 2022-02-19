#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    /*
        int n,n1=0,n2=1,n3;
        printf("Enter a number: ");
        scanf("%d",&n);
        printf("%d %d ",n1,n2 );
        
        for(int i=2;i<n;i++)
    {
        n3 = n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
        */

    int a = 0, b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a; 
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the index to get fibonacci series: ");
    scanf("%d", &n);
    printf("The value of fibonacci number at position number %d using iterative approach is %d\n", n, fib_iterative(n));
    printf("The value of fibonacci number at position number %d using recursive approach is %d\n", n, fib_recursive(n));
    fib_recursive(n);
    fib_iterative(n);
    return 0;
}
