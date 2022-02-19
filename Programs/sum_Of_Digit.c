#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,result=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
     printf("The sum of digit of %d is: ",n);
    while(n != 0)
    {
        sum = n%10;
        result = result + sum;    
        n = n/10;  
    }
    printf("%d ",result);
    getch();
    return 0;
}