#include <stdio.h>
#include <conio.h>
 
int main()
{
    float fahrenheit,celcius;

printf("Enter the value in fahreheit: ");
scanf("%f",&fahrenheit);

celcius = (fahrenheit - 32) * 5/9;
printf("%.0f Fahreheit = %.2f Celcius",fahrenheit,celcius);
    return 0;
}