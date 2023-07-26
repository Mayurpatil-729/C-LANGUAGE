// Date :

#include <stdio.h>
int main()
{
    int back = 0, num, sum = 0, rem = 0;              //sum=0                

    printf("\t Program to print reverse of given number : \n");

    printf("Enter any number : ");
    scanf("%d", &num);

    back = num;

    while (num > 0)                                  
    {
        rem = num % 10;                            //1234%10=123
        num = num / 10;                              //
        sum = sum * 10 + rem;                           //4321
    }

    printf("\n\t Reverse of %d = %d ", back, sum);
    return 0;

    // Coded by Mayur
}