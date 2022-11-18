// Date :

#include <stdio.h>
int main()
{
    int num;

    printf("\t Program for checking divisibility by 5 and 11 \n");
    printf("\n Enter the number= ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0)
        printf("\n\tNumber is divisible ");
    else
        printf(" \n\tNumber is not divisible ");
    return 0;

    // Coded by Mayur
}