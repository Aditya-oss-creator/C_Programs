/*
Instructions:-
You manage a travel agency, and you want your n drivers to input their following details:

Name of the driver
Driving License Number
Route
Kms
Your program should be able to take n as input (or you can take n=3 for simplicity), and your drivers will start inputting their details one by one. Your program should print details of the drivers in a beautiful fashion. For this task, you have to use Structure only. These four inputs: name, driving license number, route, and km information will be struct members. After creating struct, you have to create its array of size “n.”
*/

#include <stdio.h>
#include <string.h>

struct DriverDetails
{
    char name[25];
    char license_no;
    char route[25];
    int kms;
} d1, d2, d3;

int main()
{
    int n = 3, i = 1;
    int opt;

    printf("Driver %d Name: ", i);
    scanf("%s", &d1.name);
    printf("Driver %d License Number: ", i);
    scanf("%s", &d1.license_no);
    printf("Route Alloted to Driver %d: ", i);
    scanf("%s", &d1.route);
    printf("Distance(Km) Travel by Driver %d: ", i);
    scanf("%d", &d1.kms);
    printf("\n");
    i++;

    printf("Driver %d Name: ", i);
    scanf("%s", &d2.name);
    printf("Driver %d License Number: ", i);
    scanf("%s", &d2.license_no);
    printf("Route Alloted to Driver %d: ", i);
    scanf("%s", &d2.route);
    printf("Distance(Km) Travel by Driver %d: ", i);
    scanf("%d", &d2.kms);
    printf("\n");
    i++;

    printf("Driver %d Name: ", i);
    scanf("%s", &d3.name);
    printf("Driver %d License Number: ", i);
    scanf("%s", &d3.license_no);
    printf("Route Alloted to Driver %d: ", i);
    scanf("%s", &d3.route);
    printf("Distance(Km) Travel by Driver %d: ", i);
    scanf("%d", &d3.kms);
    printf("\n");

    printf("*******************Printing details of these Drivers******************\n\n");
    printf("Press 1 to view %s details\n", d1.name);
    printf("Press 2 to view %s details\n", d2.name);
    printf("Press 3 to view %s details\n", d3.name);
    scanf("%d", &opt);

    if (opt == 1)
    {
        printf("\nDriver 1 Name: %s", &d1.name);
        printf("\nDriver 1 License No: %s", &d1.license_no);
        printf("\nDriver 1 Route: %s", d1.route);
        printf("\nDriver 1 Distance raveled: %d", d1.kms);
    }

    else if (opt == 2)
    {
        printf("\nDriver 2 Name: %s", &d2.name);
        printf("\nDriver 2 License No: %s", &d2.license_no);
        printf("\nDriver 2 Route: %s", d2.route);
        printf("\nDriver 2 Distance raveled: %d", d2.kms);
    }
    else if (opt == 3)
    {
        printf("\nDriver 3 Name: %s", &d3.name);
        printf("\nDriver 3 License No: %s", &d3.license_no);
        printf("\nDriver 3 Route: %s", d3.route);
        printf("\nDriver 3 Distance raveled: %d", d3.kms);
    }
    else
    {
        printf("No such Driver\n");
    }
    return 0;
}