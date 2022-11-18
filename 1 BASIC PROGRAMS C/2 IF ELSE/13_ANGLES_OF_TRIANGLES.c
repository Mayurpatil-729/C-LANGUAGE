#include <stdio.h>
int main()
{
    int a1, a2, a3;

    printf("\t Program to finding class  \n");
    printf("\n\tEnter the first angle : ");
    scanf("%d", &a1);
    printf("\n\tEnter the second angle  : ");
    scanf("%d", &a2);
    printf("\n\tEnter the  third angle : ");
    scanf("%d", &a3);

    if (a1 == 0 || a2 == 0 || a3 == 0)
        printf("\n\t Enter the valid angles");
    else
    {

        if (a1 + a2 + a3 == 180)
            printf("\n\t THIS IS ANGLES OF TRIANGLE ");
        else
            printf("\n\t  THIS IS NOT ANGLES OF TRIANGLE");
    }
    return 0;

    // Coded by Mayur
}