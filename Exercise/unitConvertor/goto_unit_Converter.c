/*
In this program simply use switch case statements to ask user which type of conversion he wants to do and then simply use basic mathematics and convert one unit into another.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    short user_Select;
    float km, miles, inch, foot, cm, pound, kg, meter;

    printf("Press 0 for Exit\nPress 1 to convert kilometers to miles\nPress 2 to conert inches to foot\nPress 3 to convert centimeter to inches\nPress 4 to convert pound to Kgs\nPress 5 to convert inches to meters\n\n");

    while (1)
    {
        printf("\n\nSelect any one option: ");
        scanf("%d", &user_Select);

        if (user_Select == 0)
        {
            goto end;
        }
        else if (user_Select == 1)
        {
            printf("Enter value in kilometer: ");
            scanf("%f", &km);
            miles = km * 0.621;
            printf("%.1f km = %.2f miles", km, miles);
        }
        else if (user_Select == 2)
        {
            printf("Enter value in inch: ");
            scanf("%f", &inch);
            foot = inch * 0.08;
            printf("%.1f inch = %.2f foot", inch, foot);
        }
        else if (user_Select == 3)
        {
            printf("Enter value in cm: ");
            scanf("%f", &cm);
            inch = cm * 0.39;
            printf("%.1f cm = %.2f inch", cm, inch);
        }
        else if (user_Select == 4)
        {
            printf("Enter value in pound: ");
            scanf("%f", &pound);
            kg = pound * 0.45;
            printf("%.1f pound = %.2f kg", pound, kg);
        }
        else if (user_Select == 5)
        {
            printf("Enter value in inch: ");
            scanf("%f", &inch);
            meter = inch * 0.025;
            printf("%.1f inch = %.2f meter", inch, meter);
        }
        else
        {
            printf("Invalid Value");
        }
    }
end:
    printf("Exit");
    return 0;
}
