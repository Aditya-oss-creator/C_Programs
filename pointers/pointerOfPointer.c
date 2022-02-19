#include<stdio.h>

int main()
{
    int var;
    int *ptr;
    int **pptr;

    var = 50;

    // take the address of the variable var
    ptr = &var;

    // taking the address of ptr using address of operator-&
    pptr = &ptr;

    // take the value using the pptr
    printf("\n\nValue of var = %d\n\n", var);

    printf("\n\nValue available at *ptr = %d\n\n", *ptr);

    printf("\n\nValue available at **pptr = %d\n\n", **pptr);
    
    return 0;
}