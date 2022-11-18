// Date :

#include <stdio.h>

int main()
{
    int arr[10];
    int i, small;

    printf("\t Program to print greatest of array elements :\n");
    printf("Enter any 10 numbers : ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    small = arr[0];

    for (i = 0; i < 10; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }

    printf("\n\t Greatest of array elements == %d ", small);
    return 0;

    // Coded by Mayur
}