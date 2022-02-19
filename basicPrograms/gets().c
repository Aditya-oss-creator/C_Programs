/*
scanf() can only take input until it encounters a space. The words after space are ignored by it.
gets() is used to take a single input at a time but can be used to input a complete sentence with spaces unlike scanf().
gets() takes only a single line at a time i.e all the words before hitting \n(enter key).
*/

#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    char str[50];   // char array of size 50

    printf("Enter your complete name:\n\n\n");

    gets(str);
    printf("\n\nWelcome to Studytonight  %s\n\n\n", str);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}