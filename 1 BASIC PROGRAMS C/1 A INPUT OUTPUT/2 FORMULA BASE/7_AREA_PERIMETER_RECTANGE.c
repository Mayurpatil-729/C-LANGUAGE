// Date :

#include <stdio.h>
int main()
{
    int l, b;

    printf("\t Program to find area and perimeter of rectangle\n");
    printf("Enter length of rectange = : ");
    scanf("%d", &l);
    printf("Enter breadth of rectange = : ");
    scanf("%d", &b);

    printf("\n Area of rectange = %d", l * b);
    printf("\n Perimeter of rectange = %d", 2 * (l * b));
    return 0;

    // Coded by Mayur
}