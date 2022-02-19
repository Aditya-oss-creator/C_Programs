// #include<stdio.h>
// void main ()
// {
// int a[3] = {10,20,30};
// int *p[3],i;
// for (i=0; i<3; i++)
// p[i] = &a[i]; //initializing base address of array
// printf ("elements of the array are: ");
// for (i=0; i<3; i++)
// printf ("%d \t", *p[i]); //printing array of pointers
// }

#include<stdio.h>
void main ()
{
int a[3] = {10,20,30};
int *p,i;
for (i=0; i<3; i++)
p = a; //initializing base address of array
printf ("elements of the array are: ");
for (i=0; i<3; i++)
printf ("%d \t", p[i]); //printing array of pointers
}