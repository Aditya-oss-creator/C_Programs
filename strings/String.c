/*  You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space.In order to take a line as input, you can use scanf("%[^\n]%*c", s);
[] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.

Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.*/

void printStr(char str[]);

#include <stdio.h>
int main()
{
    /*char ch[5] = "harry"; gives error because we need (string length + 1) size to tell compiler where string ends by using null(\0) character at the end ,when we not add size of the string it automatically takes (string length + 1) size*/
    char str1[] = "harry"; // or char ch[6] = "harry"
    char str2[] = {'h','a','r','r','y','\0'}; // null(\0) character is compulsory to put by user in this method
    char str3[3];
    puts("Enter the string: ");
    gets(str3);
    puts(str3); // we use gets() method to take user input easily
    printStr(str1);
    printf("\n");
    puts(str1); // we can use puts() function instead of printf()
    return 0;
}
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}
