// Date :

// #include <stdio.h>
// int main()
// {
//     char str[20], cop[20];
//     int i;
//     printf("\t Program to copy string to another array : \n");
//     printf("Enter any string : ");
//     scanf("%s", str);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         cop[i] = str[i];
//     }

//     // cop[i] = '\0';

//     printf("\n\tThe copied string is : %s ", cop);
//     return 0;

//     // Coded by Mayur
// }

#include <string.h>
#include <stdio.h>
int main()
{
    char str[20], cop[20];
    int i;
    printf("\t Program to copy string to another array : \n");
    printf("Enter any string : ");
    scanf("%s", str);

    strcpy(cop, str);
    printf("\n\tThe copied string is : %s ", cop);
    return 0;

    // Coded by Mayur
}