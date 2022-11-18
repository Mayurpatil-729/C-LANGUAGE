// Date :

#include <stdio.h>
int main()
{
    int arr[5][4], i, j; // i th == rows   j th ==columns

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("\n%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\n\t The value of %d , %d element of array is %d\n", i, j, arr[i][j]);
        }
    }
    return 0;

    // Coded by Mayur
}