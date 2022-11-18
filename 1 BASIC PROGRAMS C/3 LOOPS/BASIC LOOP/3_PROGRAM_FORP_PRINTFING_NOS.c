// // Date :

// #include <stdio.h>
// int main()
// {
//     int sp, ep;

//     printf("\t\nProgram to print numbers : ");
//     printf("\nEnter starting point and ending point : ");
//     scanf("\n%d \n%d", &sp ,&ep);

//     while (sp <= ep)
//     {
//         printf("\n%d", sp);
//         sp = sp + 1;
//     }
//     return 0;

//     // Coded by Mayur
// }

// Date :

#include <stdio.h>
int main()
{
    int sp, ep;

    printf("\t\nProgram to print numbers : ");
    printf("\nEnter starting point and ending point : ");
    scanf("\n%d \n%d", &sp, &ep);

    if (sp <= ep)
        while (sp <= ep)
        {
            printf("\n%d", sp);
            sp = sp + 1;
        }
    else
        while (sp >= ep)
        {
            printf("\n%d", sp);
            sp = sp - 1;
        }
    return 0;

    // Coded by Mayur
}