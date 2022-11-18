// Date :

#include <stdio.h>
int main()
{
    int unit;
    float rs, bill;

    printf("\t  Program to calculate electricity bill :  \n");
    printf("Enter units = : ");
    scanf("%d", &unit);

    if (unit < 0)
        printf("\n\t Not valid ");
    else
    {
        if (unit == 0)
            printf("\n\n No electricity consumed ");
        else if (unit > 0 && unit <= 50)
            printf("\n\n Your bill for electricity consumed is %f", rs = 0.50 * unit);
        else if (unit > 50 && unit <= 150)
            printf("\n\n Your bill for electricity consumed is %f", rs = 0.75 * unit);
        else if (unit > 150 && unit <= 250)
            printf("\n\n Your bill for electricity consumed is %f", rs = 1.20 * unit);
        else
            printf("\n\n Your bill for electricity consumed is %f", rs = 1.50 * unit);
    }

    return 0;

    // Coded by Mayur
}