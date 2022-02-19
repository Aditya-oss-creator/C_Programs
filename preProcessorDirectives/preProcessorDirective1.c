#include <stdio.h>  //look in standard system directories
# include "preProcessorDirective2.c"    //look in current directory from where the system is running
# define PI 3.14  //# define PI 3.14; also works
# define AreaOfCircle(r) PI * r *r  //These are macros which operates like functions

int main()
{
    float pi = PI;
    float area = AreaOfCircle(5);
    printf("This is %d\n",a);
    printf("This is %f\n",pi);
    printf("This is %f",area);
    return 0;
}