#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a,b,c;
    char ch;
    printf("Enter a number: ");
    fflush(stdin);
    scanf("%d",&a);
    printf("Enter a number: ");
    fflush(stdin);
    scanf("%d",&b);
    printf("Enter a number: ");
    fflush(stdin);
    scanf("%d",&c);
    printf("Enter a character: ");
    fflush(stdin);
    scanf("%c",&ch);

    printf("%d %d %d %c\n",a,b,c,ch);
    return 0;
}