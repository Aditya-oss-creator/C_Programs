#include <stdio.h>
 
int main()
{
    int a = 32;
    float b = 3.5;
    void *ptr;
    ptr = &b;
    //printf("The value of b is %f\n",*ptr);     gives error because we cannot dereferenced void pointer
    printf("The value of b is %.2f\n",*(float *)ptr  );  // now after typecasting it with float it can be dereferenced 
    
    ptr = &a;
    printf("The value of a is %d\n",*( (int *)ptr  ));  //In void pointer, we can typecast it as many times as we want like above example.
    return 0;
}