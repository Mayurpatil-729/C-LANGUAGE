// Date :

// #include <stdio.h>
// int main()
// {
//     char str[100];
//     int i;

//     printf("\t Program to calculate length of string \n");
//     printf("Enter any string : ");
//     scanf("%s", str);

//     for (i = 0; str[i] != '\0'; i++)
//     {
//     }

//     printf("\n\t Length of the string = %d", i);

//     return 0;

//     // Coded by Mayur
// }

#include <string.h>
#include <stdio.h>
int main()
{
    char name[100];

    printf("\t Program to calculate length of string \n");
    printf("Enter any string : ");
    scanf("%s", name);

    printf("\n\t Length of the string = %d", strlen(name));

    return 0;

    // Coded by Mayur
}