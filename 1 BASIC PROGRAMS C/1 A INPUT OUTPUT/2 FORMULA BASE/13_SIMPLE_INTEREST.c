// Date :

#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, year, si, ci;

    printf("\t\n\n Program to calculate simple interest \n");
    printf("Enter the principal amount =: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest  =: ");
    scanf("%f", &rate);
    printf("Enter the year  =: ");
    scanf("%f", &year);

    si = principal * year * rate / 100;
    printf("\n\n SIMPLE INTEREST = %.3f ", si);

    ci = principal * (pow((1 + rate / 100), year));
    printf("\n\n COMPOUND INTEREST = %f", ci);

    // Coded by Mayur
}