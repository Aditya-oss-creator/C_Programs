#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,result=1;

    printf("Enter any number ");   //where n is the no. of elements
    scanf("%d",&n);
    printf("%d ",result);
    for(int i=1;i<n;i++)
    {
        result = result*2;
        printf(" %d ",result);
    }
    return 0;
}
