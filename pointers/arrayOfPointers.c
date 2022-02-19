#include <stdio.h>
/*
    Global declaration.
    Value of a const variable cannot be changed
    throughout the execution of program
*/
const int MAX = 5;

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 5, 8, 9};

    int *ptr[MAX]; // ptr array of int pointers i.e it stores the address of each array element

    for (int i = 0; i < MAX; i++)
    {
        ptr[i] = &arr[i]; // Assign the address of each of the array element to the ptr array
    }
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", *ptr[i]); // ptr[i] stores address at locatio ptr[i] ,*ptr[i] returns the value of the element stored at location ptr[i]
    }

    return 0;
}