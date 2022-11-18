// Date :

#include <stdio.h>
int main()
{
    int mat[3][3], i, j;

    printf("\t Program to display elements of array : \n");

    printf("Enter elements  matrix : ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("\n%d", &mat[i][j]);
        }
    }

    printf("Display matrix :\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;

    // Coded by Mayur
}