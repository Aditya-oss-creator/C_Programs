//Write a program to find number is armstrong or not
// 153 = 1*1*1+5*5*5+3*3*3
#include<stdio.h>
int main()
{
    int n,sum=0,rem,temp;
    printf("Enter a number to check: ");
    scanf("%d",&n);
    temp = n;
    while (n > 0)
    {
        rem = n%10;
        sum = sum + (rem*rem*rem);
        n = n/10;
    }
    if(temp == sum)
    {
        printf("%d is Armstrong Number ",temp);
    }
    else
    {
        printf("%d is not Armstrong Number ",temp);
    }
    return 0;
}