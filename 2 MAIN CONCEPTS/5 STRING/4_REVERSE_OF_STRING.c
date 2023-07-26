

// Date :

// #include <stdio.h>
// int main()
// {
//     char str[20];
//     int i, j;

//     printf("\t Program to print reverse of string  \n");
//     printf("Enter any string : ");
//     scanf("%s", str);

//     for (i = 0; str[i] != '\0'; i++)
//     {
//     }

//     printf("\n\t Reverse of string is :");
//     for (j = i; j >= 0; j--)
//     {
//         printf("\n\t %c ", str[j]);
//     }
//     return 0;

//     // Coded by Mayur
// }

#include <string.h>
#include <stdio.h>
int main()
{
    char str[20];

    printf("\t Program to print reverse of string  \n");
    printf("Enter any string : ");
    scanf("%s", str);

    printf("\n\t Reverse of string is :");

    printf("\n\t %s ", strrev(str));

    return 0;

    // Coded by Mayur
}