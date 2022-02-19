
#include <stdio.h>
#include <conio.h>

int isPalindrome(int n)
{
    int rem, sum = 0, temp;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = (sum * 10) + rem;
        n = n / 10;
    }
    if (temp == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter a number to check it is Palindrome or not: ");
    scanf("%d", &n);
    isPalindrome(n);
    if (isPalindrome(n))
    {
        printf("%d is plaindrome", n);
    }
    else
    {
        printf("%d is not palindrome", n);
    }
    return 0;
}