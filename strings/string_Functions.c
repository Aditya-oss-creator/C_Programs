#include<string.h>  //we need to include string header file to use string funtions
#include <stdio.h>
int main()
{
    char s1[] = "harry";
    char s2[] = " met Sejal";
    char s3[50];
    char s4[50];

    puts("Enter string");
    gets(s3);
    puts("Enter string to concatenate");
    gets(s4);

    printf("%s \n\n",strcat(s3,s4));

    printf("The strcmp for s1 an s2 returned %d\n", strcmp(s1,s2));
    printf("The length of str1 is %d\n",strlen(s1));
    printf("The concatenation of s1 and s2 is ");\
    puts(strcat(s1,s2));
    
    // s3 = strcpy(s1,s2); we canot initialize s3 like this
    printf("The copy string in s3 is ");
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    printf("The reverse of s1 string is ");
    puts(strrev(s1));
    return 0;
}