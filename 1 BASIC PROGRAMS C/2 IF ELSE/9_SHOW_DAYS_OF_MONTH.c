// Date :

#include <stdio.h>
int main()
{
    int m;

    printf("\t\n Program to show number of days in month \n");
    printf("\t \nEnter the month number =");
    scanf("%d", &m);

    if (m < 1 || m > 12)
        printf(" \t\tEnter number between 1 to 12");
    else
    {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
            printf(" \n\tMonth has 31 days ");
        else if (m == 2)
            printf("\t\n Month has 28 days");
        else
            printf("\t\n Month has 30 days");
    }
    return 0;

    // Coded by Mayur
}