/*Given a base-10 integer,n , convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 1\'s in n\'s binary representation. When working with different bases, it is common to show the base as a subscript.
Example
n = 125
The binary representation of 125(base-10)is 1111101(base-2) . In base 10, there are 5 and 1 consecutive(continuous) ones in two groups. Print the maximum,5*/
// 125-> 111101 (output-5)

#include <stdio.h>

int main()
{
    int n, rem = 0, count = 0, max = 0;
    printf("Enter the number to find its binary: ");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 2;
        if (rem == 1)
        {
            count++;
            if (count >= max)
            {
                max = count;
            }
        }
        else
            count = 0;
            n = n / 2;
    }

    printf("%d", max);
    return 0;
}