 #include <stdio.h>

#include <stdio.h>
int main()
{
    int a = 7;
    typedef int* intpointer; //(int*) whole knows as intpointer
    intpointer b = &a;
    printf("%d",*b);
    return 0;
}



// #include <stdio.h>
// typedef is used to give nickname to data type
// typedef struct Student{
//     char name[25];
//     int id;
// }std;   // now the Student is also known as std

// int main()
// {
//     std s1,s2;
//     s1.id = 3;
//     s2.id = 7;
//     printf("%d\n",s1.id);
//     printf("%d\n",s2.id);
//     return 0;
// }


//int main()
// {
//     typedef unsigned long ul; //unsigned long now also known as (ul).You can use unsigned long or ul both will work.
//     ul l1,l2,l3;  //works same
//     unsigned long 
//     return 0;
// }