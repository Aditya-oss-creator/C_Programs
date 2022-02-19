#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr = "I am a String"; // not wrong because it is character array and it automatically stored base address of that array
    // char *ptrr = 5; //wrong because 5 is value
    printf("%c  %s\n", *ptr, ptr);
    printf("Dk ""UNITED\n");
    printf("VALUE IS %d\n", 10 + 1);
    printf("10+1\n");
    printf("Dk ""\"UNITED\"\n");
    printf("Dk \"UNITED\"\n");
    printf("Dk \"UNITED\"\n");
    printf("Dk \"UNITED\"\n");
    printf("%d\n", printf("United\n"));
    printf("%c", printf("United\n"));
    printf("%s", printf("United\n"));
    // printf("Dk "UNITED"");   gives error
    return 0;
}