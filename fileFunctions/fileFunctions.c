// stdio.h header file contains File functions fputc(), fputs(), fgetc(), fgets()
#include <stdio.h>

int main()
{
    // FILE *fptr = NULL;
    // fptr  = fopen("fileFunctions.txt","r");
    // //we will open this in read mode because it will take char & string from .txt file & give it to this function
    // char ch = fgetc(fptr);
    // printf("r mode give next character every time function calls: %c\n", ch);
    // ch = fgetc(fptr);
    // printf("r mode give next character every time function calls: %c\n", ch);       //     // fclose(fptr);

    // FILE *fptr = NULL;
    // fptr = fopen("fileFunctions.txt", "r");
    //// we will open this in read mode because it will take char & string from .txt file & give it to this function
    // char str[30];
    // fgets(str, 5, fptr);
    // printf("r mode give next string every time function calls: %s\n", str);
    // fgets(str, 6, fptr);
    // printf("r mode give next character every time function calls: %s\n", str); // give n-1 string because last one is for null character
    // fclose(fptr);

    // FILE *fptr = NULL;
    // fptr = fopen("fileFunctions.txt", "w");
    // // we will open this in write mode because it will put char & string in .txt file
    // fputc('a', fptr);
    // fputs(" \nw mode will clean old content,then write new content", fptr);
    // fclose(fptr);
    // return 0;

    //  FILE *fptr = NULL;
    // fptr = fopen("fileFunctions.txt", "r+");
    // fputc('A', fptr);
    // fputs(" \n r+ mode add new content in starting without deleting old content\n", fptr);
    // fclose(fptr);
    // return 0;

    // FILE *fptr = NULL;
    // fptr = fopen("fileFunctions.txt", "w+");
    // fputc('A', fptr);
    // fputs(" \nw+ mode Clean old content,then write new content\n", fptr);
    // fclose(fptr);
    // return 0;

    FILE *fptr = NULL;
    fptr = fopen("fileFunctions.txt", "a+");
    fputc('A', fptr);
    fputs(" \na+ mode append the new content in end without deleting the old content\n", fptr);
    fclose(fptr);
    return 0;
}