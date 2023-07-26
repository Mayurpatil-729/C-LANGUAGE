// Date :

#include <stdio.h>
int main()
{
    int back, rem, rev = 0, num;

    printf("\t Program to check number is pallindrome or not : \n");
    printf("Enter number : ");
    scanf("%d", &num);

    back = num;

    while (num != 0)
    {
        rem = rem % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }

    if (back == rev)
        printf("\n\t Given number is pallindrome");
    else
        printf("\n\t Given number is not pallindrome");

    return 0;

    // Coded by Mayur
}