// Date :

#include <stdio.h>
int main()
{
    int n;

    printf("\t Program to display day by the given number: \n");
    printf("Enter any number : ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("SUNDAY");
        break;
    case 2:
        printf("MONDAY");
        break;
    case 3: 
        printf("TUESDAY");
        break;
    case 4:
        printf("WEDNESDAY");
        break;
    case 5:
        printf("THURSDAY");
        break;
    case 6:
        printf("FRIDAY");
        break;
    case 7:
        printf("SATURDAY");
        break;
    default:
        printf("\n\t Enter the valid number between 1 to 7 ");
    }
    return 0;

    // Coded by Mayur
}