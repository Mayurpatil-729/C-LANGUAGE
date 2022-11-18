// Date :

#include <stdio.h>
int main()
{
    int num;

    printf("\n Program for checking number is even or odd ");
    printf("\n Enter the number =");
    scanf("%d", &num);

    if (num == 0)
        printf("\n Both Numbers are zero");
    else
    {
        if (num % 2 == 0)
            printf("\n Number is even");
        else
            printf(" \n Number is odd ");
    }
    return 0;

    // Coded by Mayur
}