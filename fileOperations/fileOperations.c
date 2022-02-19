// Other content is in fileOperations.txt file
#include <stdio.h>

int main()
{
    // FILE *ptr = NULL;
    // char string[54];

    // // ********Reading a File*********
    // ptr = fopen("fileOperations.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file has %s\n",string);


    // FILE *ptr = NULL;
    // char string[74] = "This is for aading new content in fileOperations2.txt";

    // // ********Writing a File*********
    // ptr = fopen("fileOperations.txt", "w");
    // fprintf(ptr, "%s", string);
    // return 0;

     FILE *ptr = NULL;
    char string[74] = ".This is for append a content in fileOperations.txt";

    // ********Append in File*********
    ptr = fopen("fileOperations.txt", "a");
    fprintf(ptr, "%s", string);
    fclose(ptr);
    return 0;
}