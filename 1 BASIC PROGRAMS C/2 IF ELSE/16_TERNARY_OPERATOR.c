// Date :

// #include <stdio.h>
// int main()
// {
//     int n1, n2, large;

//     printf("\t Program to find greatest of two integers : \n");
//     printf("Enter any two numbers : ");
//     scanf("%d \n%d", &n1, &n2);

//     large = n1 > n2 ? n1 : n2;

//     printf("\n\t Greatest number = %d ", large);
//     return 0;

//     // Coded by Mayur
// }

#include <stdio.h>
int main()
{
    int n1, n2, n3, large;

    printf("\t Program to find greatest of two integers : \n");
    printf("Enter any two numbers : ");
    scanf("%d \n%d \n%d", &n1, &n2, &n3);

    large = (n1 > n2) ? (n1 > n3) ? n1 : n3):((n2 > n3 ? n2 : n3);

    printf("\n\t Greatest number = %d ", large);
    return 0;

    // Coded by Mayur
}