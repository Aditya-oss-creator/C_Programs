#include <stdio.h>

long int recursive_factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * recursive_factorial(number - 1);
    }
}

long int iterative_factorial(int number)
{
    long int value = 1;

    if (number == 0 || number == 1)
    {
        return 1;
    }

    else
    {
        while(number>1){
            value = value * number;
            number--;
        }
    }
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want factorial of: ");
    scanf("%d", &num);
    printf("The factorial of %d using recursive approach is %lu\n", num, recursive_factorial(num));
    printf("The factorial of %d using iterative approach is %d ", num, iterative_factorial(num));

    return 0;
}
