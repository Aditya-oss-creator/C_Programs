#include <stdio.h>
int main()
{
    // int a=34;
    // int *ptra = &a;

    // char b ='3';
    // char *ptrb = &b;

    int arr[] = {1,2,3,4};
    // arr++; throws error cannot dereference the original array 

    
    // printf("The address of a is %d\n",ptra);
    // printf("The address of b is %d\n",ptrb);
    // ptra++;  //icrease 4 byte because int is of 4 byte
    // ptrb++; //icrease 1 byte because char is of 1 byte
    // printf("The address of a is %d\n",ptra);
    // printf("The address of b is %d\n",ptrb);
    // printf("The address of a is %d\n",ptra + 2); //icrease 4 byte because int is of 4 byte
    // printf("The address of b is %d\n",ptrb + 2); //icrease 1 byte because char is of 1 byte
    // printf("The address of a is %d\n",&a);
    // printf("The address of b is %d\n",&b);
    // printf("%d\n",arr[2]);          // both are same thing 
    // printf("%d",*(arr + 2));

    printf("The address of first element of array is %d\n",&arr[0]);
    printf("The address of first element of array is %d\n",&arr);
    printf("The address of second element of array is %d\n",arr+1);// don't use (&)symbol for address
    printf("The address of second element of array is %d\n\n",&arr[1]);
    
    //derefrencing (*)

    printf("The value at address of first element of array is %d\n",*(&arr[0]));
    printf("The value at address of first element of array is %d\n",*arr);
    printf("The value at address of first element of array is %d\n",arr[0]);
    printf("The value at address of second element of array is %d\n",*(arr+1));
    printf("The value at address of second element of array is %d\n",*(&arr[1]));
    return 0;
}