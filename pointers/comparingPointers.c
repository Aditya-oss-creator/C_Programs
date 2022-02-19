#include <stdio.h>

int main()
{
    int *ptrA, *ptrB;
    int *ptrC;
    float *ptrD;

    // Below is a program on pointer comparison for same type of pointer

    ptrA = (int *)1; // 1 is the address of ptrA
    ptrB = (int *)2; // 2 is the address of ptrB

    printf("%X %X", ptrA, ptrB);

    if (ptrB > ptrA)
        printf("\nPtrB is greater than ptrA\n\n");

    // Below is a program on pointer comparison for different type of pointer:

    ptrC = (int *)1000;
    ptrD = (float *)2000;

    printf("%d %d", ptrC, ptrD);

    if (ptrD > ptrC)
        printf("\nptrD is greater the ptrC\n");

    return 0;
}