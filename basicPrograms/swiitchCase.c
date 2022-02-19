#include <stdio.h>
#include <conio.h>

void addition(int a, int b)
{
    printf("The addition of a and b is: %d", a + b);
}

void subtraction(int a, int b)
{
    printf("The subtraction of a and b is: %d", a - b);
}
void multiplication(int a, int b)
{
    printf("The multiplication of a and b is: %d", a * b);
}
void division(int a, int b)
{
    printf("The division of a and b is: %.2f", (float)a / b);
}

int main()
{
    int n, a, b;

    printf("\nPress 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 division\n\n");
    scanf("%d", &n);

    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);

    switch (n)
    {
    case 1:

        addition(a, b);
        break;
    case 2:
        subtraction(a, b);
        break;

    case 3:
        multiplication(a, b);
        break;

    case 4:
        division(a, b);
        break;

    default:
        break;
    }

    return 0;
}