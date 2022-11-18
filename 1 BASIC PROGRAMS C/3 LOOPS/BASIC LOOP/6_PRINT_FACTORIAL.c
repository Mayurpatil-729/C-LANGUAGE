// Date :

#include <stdio.h>
int main()
{
    int fact = 1, n, i = 1; // long

    printf("\t program to print factorial of number \n");
    printf("Enter : ");
    scanf("%d", &n);

    while (i <= n)
    {
        fact = fact * i;
        i = i + 1;
    }

    printf("\n\tFactorial = %d", fact);
    return 0;

    // Coded by Mayur
}