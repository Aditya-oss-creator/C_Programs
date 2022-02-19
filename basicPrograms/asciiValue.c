#include<stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    printf("Enter any character: ");
    scanf("%c",&c);

    printf("The Ascii value of %c is: %d",c,c);
    return 0;
}
