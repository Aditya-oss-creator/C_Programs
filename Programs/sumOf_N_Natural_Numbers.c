#include<stdio.h>
int main(int argc, char const *argv[])
{
//    int n,i=1,sum = 0;
    int n,sum;
    printf("Enter value of n ");
    scanf(" %d",&n);

    // while(i <= n)
    // {
    //     sum = sum + i;
    //     i++;
    // }

    sum = n*(n+1)/2;       // efficient way 
    printf("The sum of first %d natural numbers is %d",n,sum);
    
    return 0;
}
