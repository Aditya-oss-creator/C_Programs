#include <stdio.h>
 
int main()
{
    char c;
    char s[15];
    char str[100];

    printf("Enter a character,a word and a sentence\n");
    scanf("%c",&c);
    scanf("%s\n",&s);
    scanf("%[^\n]s",&str);

    printf("\nThe output is: \n%c\n%s\n%s",c,s,str);
    
    return 0;
}