// Date :

// #include <stdio.h>
// int main()
// {
//     int a = 0, b = 1, c = 1;                   //a==>0,b==>1,c==>a+b

//     printf("\t Program to print fibonnaci series : \n");

//     while (a <= 55)                           //sp ==>a
//     {
//         c = a + b;
//         printf("\n\t%d", a);                 //print ===>a
//         a = b;
//         b = c;
//     }
//     return 0;

//     // Coded by Mayur
// }

#include <stdio.h>
int main()
{
    int a=0, b = 1, c = 0, i, j; // a==>0,b==>1,c==>a+b

    printf("\t Program to print fibonnaci series : \n");
    printf("Enter ending point :");
    scanf("\n\t%d", &i);

    while (a <= i) // sp ==>a
    {
        c = a + b;
        printf("\n\t%d", a); // print ===>a
        a = b;
        b = c;
        j = j + 1;
    }
    return 0;

    // Coded by Mayur
}
