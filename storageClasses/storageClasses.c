#include <stdio.h>
int sum = 982;     // for extern
 
//  //using auto
//  int myfunc1(int a, int b)
//  {
//     auto int sum;   // int sum; is also same
//      sum = a+b;
//      return sum;
//  }
// int main()
// {
//     // Declaration - Telling the compiler about the variable(No space reserve)
//     // Definition - Declaration + space reservation
//     int a=3,b=2,sum;
//    sum = myfunc1(a,b);
//    printf("sum is:%d ",sum);

    
//     return 0;
// }



//  //using extern

//   int myfunc1(int a, int b)
//  {
//     extern int sum;   
//      sum += a+b;
//      return sum;
//  }

// int main()
// {
//     int a=3,b=5;
//     myfunc1(a,b);
//    printf("sum is:%d ",sum); // print 990 because  global sum =sum+a+b = 990 
//     return 0;
// }

// // using static
//   int myfunc1()
//  {
//     static int sum;   
//     sum++;
//     printf("The  sum is:%d\n",sum);
//      return sum;
//  }

// int main()
// {
//     int sum = myfunc1();
//      sum = myfunc1();
//      sum = myfunc1();
//      sum = myfunc1();
//    //printf("The  sum is:%d ,sum);
//     return 0;
// }

// using static
  int myfunc1()
 {
    static int sum;   
    sum++;
    printf("The  sum is:%d\n",sum);
     return sum;
 }

int main()
{
    register int sum = myfunc1();
     sum = myfunc1();
     sum = myfunc1();
     sum = myfunc1();
   //printf("The  sum is:%d ,sum);
    return 0;
}