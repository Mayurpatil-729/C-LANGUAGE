// Date :

#include <stdio.h>
int main()
{
    int mat1[9], mat2[9], sum[9], i;

    printf("\t program for addition of two matrices : \n");
    printf("Enter elements of first matrix : ");

    for (i = 0; i < 9; i++)
    {
        scanf("\n%d", &mat1[i]);
    }
    printf("Enter elements of second matrix : ");
    for (i = 0; i < 9; i++)
    {
        scanf("\n%d", &mat2[i]);
    }

    printf("\n\t Addition of two  matrix :");
    for (i = 0; i < 9; i++)
    {
        sum[i] = mat1[i] + mat2[i];
    }

    for (i = 0; i < 9; i++)
    {
        printf("\n\t %d", sum[i]);
    }
    return 0;

    // Coded by Mayur
}