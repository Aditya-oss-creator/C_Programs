#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 7;
    printf("The value of a is %d\n",a);
    int *ptra = &a;
    printf("The value of a is %d\n",*ptra); 
    /*first go to ptra then go to that address which stores in ptra and print the value which store in that address*/
    printf("The address of a is %x\n",&a);
    printf("The address of a is %x\n",ptra);
    //print tthe address of 'a' because of %x format specifier
    printf("The address of ptra is %x\n",&ptra);
    //print the address of ptra because of %x format specifier
    printf("The address of ptra is %p",&ptra);
    //print the address of ptra because of %p format specifier
     
    return 0;
}
