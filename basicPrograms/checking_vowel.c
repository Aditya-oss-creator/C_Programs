/*
10

printf() could be thought of as a more powerful version of puts. printf provides the ability to format variables for output using format specifiers such as %s, %d, %lf, etc...

the printf() function is used to print both strings and variables to the screen while the puts() function only permits you to print a string only to your screen.

puts() takes more time compared to printf()
puts() is the simple choice and adds a new line in the end and printfwrites the output from a formatted string.
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    puts("Enter any character");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        puts("vowel");
        break;

        case 'A':
        puts("vowel");
        break;

        case 'e':
        puts("vowel");     
        break;

        case 'E':
        puts("vowel");
        break;

        case 'i':
        puts("vowel");
        break;

        case 'I':
        puts("vowel");
        break;

        case 'o':
        puts("vowel");
        break;

        case 'O':
        puts("vowel");
        break;

        case 'u':
        puts("vowel");
        break;

        case 'U':
        puts("vowel");
        break;

        default:
        puts("consonant");

    }
    return 0;
}
