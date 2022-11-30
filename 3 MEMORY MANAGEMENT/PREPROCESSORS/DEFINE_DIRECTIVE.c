// Date :

#include <stdio.h>
#define PI 3.14
int main()
{
    float radius;

    printf("\t Program for finding area and perimeter of circel \n");
    printf("Enter radius of circle = ");
    scanf("%f", &radius);

    printf("VALUE OF PI IS : %3.2f", PI);
    printf("\n\t Perimeter of circle = %f ", 2 * PI * radius);
    printf("\n \t Area of the circle = %f", PI * radius * radius);
    return 0;

    // Coded by Mayur
}