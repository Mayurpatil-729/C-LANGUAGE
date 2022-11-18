// Date :

#include <stdio.h>
int main()
{
    int s1, s2, s3;

    printf("\t Program to find type of triangel \n");
    printf("Enter sides of triangle : ");
    printf("\nEnter the first side =");
    scanf("%d", &s1);
    printf("\nEnter the second side =");
    scanf("%d", &s2);
    printf("\nEnter the third side =");
    scanf("%d", &s3);

    if (s1 == 0 && s2 == 0)
        printf("\t\nEnter the valid number");
    else if (s1 == s2 && s2 == s3)
        printf("\n\t EQUILATERAL TRIANGLE ");
    else if (s1 * s1 == s2 * s2 + s3 * s3 || s2 * s2 == s1 * s1 + s3 * s3 || s3 * s3 == s1 * s1 + s2 * s2)
        printf("\n\t RIGHT ANGLED TRIANGLE ");
    else if (s1 == s2 || s2 == s3 || s1 == s3)
        printf("\n\t ISOSCLES TRIANGLE");
    else
        printf("\n\t SCALENE TRIANGLE ");
    return 0;

    // Coded by Mayur
}