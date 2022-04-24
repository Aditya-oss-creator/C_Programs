#include <stdio.h>
 
int main()
{
    int sum=0,carry=0,place_value=1,x,
        a=123,
        b=456,
        c=789;

    while(a || b || c) 
    {
    x = a%10 + b%10 + c%10 + carry;

            carry = x/10;
            x = x%10;
            sum = sum + place_value*x;
            place_value = place_value*10;
            a = a/10;
            b = b/10;
            c = c/10;
    }

    if(carry)
    {
        sum = sum + place_value;
    }
    printf("%d",sum);
    return 0;
}