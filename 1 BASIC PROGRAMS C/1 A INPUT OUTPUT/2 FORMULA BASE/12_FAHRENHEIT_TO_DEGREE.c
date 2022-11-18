// Date :

#include <stdio.h>
int main()
{
    int degree, fahrenheit;

    printf("\t Program to convert  fahrenheit into  degree\n");
    printf("Enter degree = : ");
    scanf("%d", &fahrenheit);
    degree = 5.0 / 9.0 * (fahrenheit - 32);
    printf("\n\n degree = %d", degree);
    return 0;

    // Coded by Mayur
}