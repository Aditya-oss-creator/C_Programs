#include<stdio.h>

int main(int argc, char const *argv[])
{
    int year,week,days;
    printf("Enter days ");
    scanf(" %d",&days);


    year = days/365;
    days = days%365;
    week = days/7;
    days = days%7;

    
    printf("%d year\n%d week\n%d days",year,week,days);
     
    return 0;
}
