#include <string.h>
#include <stdio.h>
int main()
{
    char str1[20], str2[20];
    // int strcat();
    printf("\t Program to Merge two string : \n");
    printf("Enter  2 string  : ");
    scanf("%s \n%s", str1, str2);

    strcat(str1, str2);
    printf("\n\t The concated string is : %s", str1);

    return 0;

    // Coded by Mayur
}