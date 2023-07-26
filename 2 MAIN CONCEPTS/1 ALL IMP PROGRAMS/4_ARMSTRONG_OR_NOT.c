// Date :

#include <stdio.h>
int main()
{
    int num, back, sum = 0, rem = 0;

    printf("\t Program to check given number is armstrong or not \n");

    printf("Enter  any number : ");
    scanf("%d", &num);

    back = num;

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem * rem * rem;
    }

    if (sum == back)
        printf("\n\t Number is Armstrong ");
    else
        printf("\n\t Number is not Armstrong");
    return 0;

    // Coded by Mayur
}