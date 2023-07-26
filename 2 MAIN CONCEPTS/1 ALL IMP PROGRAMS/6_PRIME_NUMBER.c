// Simple :

// #include <stdio.h>
// int main()
// {
//     int num, count = 0, i = 1;

//     printf("\t Program to check given number is prime number or not \n");
//     printf("Enter any number  : ");
//     scanf("%d", &num);

//     if (num <= 0)
//         printf("\n\n Enter the positive number ");

//     else
//     {
//         while (i <= num)
//         {
//             if (num % i == 0)
//                 count = count + 1;
//             i = i + 1;
//         }
//         if (count == 2)
//             printf("\n\t Given number is prime number");
//         else
//             printf("\n\t Given number is not prime number ");
//     }

//     return 0;

//     // Coded by Mayur
// }

// Using  Flag : Most efficient

#include <stdio.h>
int main()
{

    int num, i = 2, flag = 0;

    printf("\t Program to check given number is prime number or not \n");
    printf("Enter any number  : ");
    scanf("%d", &num);

    if (num <= 0)
        printf("\n\n Enter the positive number ");

    else
    {
        while (i < num / 2)
        {
            if (num % i == 0)
            {
                flag = 1; // use as a signed,symbol
            }

            i = i + 1;
        }
        if (flag == 0)
            printf("\n\t Given number is prime number");
        else
            printf("\n\t Given number is not prime number ");
    }

    return 0;

    // Coded by Mayur
}
