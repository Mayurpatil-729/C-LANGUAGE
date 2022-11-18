// Date :

#include <stdio.h>
int main()
{
    int num, sum = 0, rem, rev = 0, back;

    printf("\t Program to check number is reverse , pallindrome, and armstrong or not \n");
    printf("Enter any number : ");
    scanf("%d", &num);

    back = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
        num = num / 10;
        rev = rev * 10 + rem;
    }

    printf("\n\t Reverse of %d is %d", back, rev);
    if (back == num)
        printf("\n\t Given number is pallindrome ");
    else
        printf("\n\t Given number is not pallindrome ");
    if (back == sum)
        printf("\n\t Given number is armstrong ");
    else
        printf("\n\t Given number is armstrong ");
    return 0;

    // Coded by Mayur
}