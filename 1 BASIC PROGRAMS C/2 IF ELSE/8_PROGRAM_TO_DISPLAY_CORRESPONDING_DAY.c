// Date :

#include <stdio.h>
int main()
{
    int day;

    printf("\t Program to display corresponding day by enter number  \n");
    printf("Enter the day number : ");
    scanf("%d", &day);

    if (day >= 8)
        printf("\nplease enter valid number");
    else
    {
        if (day == 1)
            printf("SUNDAY");
        if (day == 2)
            printf(" MONDAY");
        if (day == 3)
            printf("TUESDAY");
        if (day == 4)
            printf("WEDNESDAY");
        if (day == 5)
            printf("THURSDAY");
        if (day == 6)
            printf("FRIDAY");
        if (day == 7)
            printf("SATURDAY");
    }
    return 0;

    // Coded by Mayur
}