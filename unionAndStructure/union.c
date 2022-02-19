#include <stdio.h>
#include <string.h>


union Books{
    int pages;
    char name[20];
};
int main()
{
   union Books b1;
    b1.pages = 35; //shared same memory location so last declaration will remain in memory
    strcpy(b1.name,"harry");
    printf("%d\n",b1.pages);
    printf("%s",b1.name);
    return 0;
}