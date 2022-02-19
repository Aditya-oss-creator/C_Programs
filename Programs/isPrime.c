#include <stdio.h>

void isPrime(int n)
{
    int count = 0;
    if(n != 1){
    for (int i = 2; i < n; i++)

    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is a composite number number", n);
    }
    }
    else
    {
        printf("1 is neither a Prime number nor composite number\n");
    }
}
int main()
{
    int n;
    printf("Enter the number to check it is prime: ");
    scanf("%d", &n);
    isPrime(n);

    return 0;
}