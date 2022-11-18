// Date :

// #include <stdio.h>
// int main()
// {
//     int i = 2;

//     printf("\t Program to print 1 to 100 even numbers : \n");

//     while (i <= 100)
//     {
//         printf("\n\t%d", i);
//         i = i + 2;
//     }
//     return 0;

//     // Coded by Mayur
// }

#include <stdio.h>
int main()
{
    int i = 0;

    printf("\t Program to print 1 to 100 even numbers : \n");

    while (i <= 100)
    {
        if (i % 2 == 0)
            printf("\n\t%d", i);
        i = i + 2;
    }
    return 0;

    // Coded by Mayur
}