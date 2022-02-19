//Calculate the sum and product of the two integers.
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,product=1,result=1;
    printf("Enter value of n ");
    scanf(" %d",&n); 
    printf("The sum of digit of %d is: ",n);
    while(n != 0)
    {
        product = n%10;
        result = result * product;    
        n = n/10;  
    }
    printf("%d ",result);
   
    return 0;
}
