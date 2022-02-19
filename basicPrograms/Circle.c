#include <stdio.h>
#include <conio.h>

#define PI 3.14

int main()
{
    float radius, circumference;

    printf("Enter the radius of a Circle: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;
    printf("The circumference of a circle is: %.2f\n", circumference);
    return 0;
}