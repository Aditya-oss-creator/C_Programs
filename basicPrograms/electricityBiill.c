#include <stdio.h>
#include <conio.h>

int main()
{
    int unitConsumed;
    float totalBill;

    printf("Enter your electricity bill in  units: ");
    scanf("%d", &unitConsumed);

    if (unitConsumed < 100)
    {
        totalBill = unitConsumed * 0.50;
    }
    else if (unitConsumed >= 101 && unitConsumed <= 300)
    {
        totalBill = unitConsumed * 0.60;
    }
    else
    {
        totalBill = unitConsumed * 1.00;
    }

    printf("The total electricity consumed is %d unit and Total cost is %.2f Rs\n",unitConsumed,totalBill);
    return 0;
}