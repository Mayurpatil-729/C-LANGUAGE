/*
#include <stdio.h>
//#include<conio.h>
int main()
{
    char c;
    printf("\n\n Enter any character= ");
    scanf("%c", &c);
    printf("\n\n Ascii value = %d", c);
    return 0;
    // getch();
}
*/

// Date :
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 1;
    printf("\t print ascii value\n");
    while (i <= 255)
    {
        // exit(1000);
        printf("\n\t %d\t =\t%c", i, i);
        i = i + 1;
    }
    return 0;
    // Coded by Mayur
}