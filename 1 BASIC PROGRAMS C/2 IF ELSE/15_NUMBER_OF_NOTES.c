// Date :

#include <stdio.h>
int main()
{
    int amount, n500 = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

    printf("\t Enter the amount = \n");
    scanf(" \t\t%d", &amount);

    if (amount <= 0)
        printf("\n\t Please enter the valid amount ");
    else
    {
        if (amount >= 500)
        {
            n500 = amount / 500;
            amount = amount % 500;
        }
        if (amount >= 100)
        {
            n100 = amount / 100;
            amount = amount % 100;
        }
        if (amount >= 50)
        {
            n50 = amount / 50;
            amount = amount % 50;
        }
        if (amount >= 20)
        {
            n20 = amount / 20;
            amount = amount % 20;
        }
        if (amount >= 10)
        {
            n10 = amount / 10;
            amount = amount % 10;
        }
        if (amount >= 5)
        {
            n5 = amount / 5;
            amount = amount % 5;
        }
        if (amount >= 2)
        {
            n2 = amount / 2;
            amount = amount % 2;
        }
        if (amount >= 1)
        {
            n1 = amount / 1;
        }

        printf("\n\t no. of notes of 500 = %d", n500);
        printf("\n\t no. of notes of 100 = %d", n100);
        printf("\n\t no. of notes of 50 = %d", n50);
        printf("\n\t no. of notes of 20 = %d", n20);
        printf("\n\t no. of notes of 10 = %d", n10);
        printf("\n\t no. of notes of 5 = %d", n5);
        printf("\n\t no. of notes of 2 = %d", n2);
        printf("\n\t no. of notes of 1 = %d", n1);
    }
    return 0;

    // Coded by Mayur
}