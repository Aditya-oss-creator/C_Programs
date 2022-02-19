#include<stdio.h>
#define PI 3.14         //define constant using #define preprocessor
int main()
{
    const float pi = 3.14;  //define constant using const keywors
    int a=5;
    float b = 7.333;

    printf("%1.2f\n",b);
    printf("%1.4f\n",b);
    printf("%6.2f\n",b);    
    printf("%8.4f\n",b);
    printf("%-8.2f this\n",b);
    printf("%f",PI);

    return 0;
}