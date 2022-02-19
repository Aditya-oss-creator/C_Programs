#include<stdio.h>
// swapping without third variabe
int main(int argc, char const *argv[])
{
    int a,b;
    clrscr();
    printf("Enter value of a ");
    scanf(" %d",&a);
    printf("Enter value of b ");
    scanf(" %d",&b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping a is %d\nb is %d",a,b);
    return 0;
}
