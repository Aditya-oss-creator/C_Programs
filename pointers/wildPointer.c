#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 56;
    int *ptr;        // This is a wild pointer
  //  *ptr = 34;    //This is not a good thing
    ptr = &a;       //ptr is no longer a wild pointer
    printf("The value of a is %d\n",a);
    return 0;
}