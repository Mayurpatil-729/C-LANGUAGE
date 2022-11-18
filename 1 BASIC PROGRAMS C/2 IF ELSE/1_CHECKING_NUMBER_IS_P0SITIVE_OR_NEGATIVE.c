//Date :

#include <stdio.h>
int main()
{
    int num;
    
    printf("\t Program to check given number is positive or negative \n");
    printf("\n Enter the number =");
    scanf("%d",&num);

    if(num==0)
        printf(" \tNumber is zero ");
    else
    {
    if(num>0)
        printf(" \tNumber is positive");
    else
        printf(" \tNumber is negative");
    }
    return 0;

// Coded by Mayur
}