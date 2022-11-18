// Date :

#include <stdio.h>
int main()
{
    int mat1[3][3], mat2[3][3], sub[3][3], i, j;

    printf("\t Program for multipication of two matrices : \n");

    printf("Enter elements of first matrix : ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("\n%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("\n%d", &mat2[i][j]);
        }
    }

    printf("\n\t Multiplication of two  matrix :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // sub[i][j] = sub[i][j] + (mat1[i][j] + mat2[i][j]);
            sub[i][j] = (mat1[i][j] * mat2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n\t %d", sub[i][j]);
        }
    }
    return 0;

    // Coded by Mayur
}