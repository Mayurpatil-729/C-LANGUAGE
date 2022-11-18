// Date :

// #include <stdio.h>
// int main()
// {
//     int i = 1, n;

//     printf("\t Program to print table of given number : \n");
//     printf("Enter any number : ");
//     scanf("%d", &n);

//     while (i <= 10)
//     {
//         printf("\n\t%d", i * n);
//         i = i + 1;
//     }
//     return 0;

//     // Coded by Mayur
// }

// Date :

#include <stdio.h>
int main()
{
    int i, j;

    printf("\t Program to print table of given number : \n");

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("\n \t %d ", i * j);
        }
    }
    printf("\t");
    return 0;

    // Coded by Mayur
}
