// Date :

#include <stdio.h>
int main()
{
    int arr[10], cop[10], i;

    printf("\t Program to accept array elements and copy them to another array \n");
    printf("Enter array elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        cop[i] = arr[i];
        printf("\n\t copied array elements : %d", cop[i]);
    }
    return 0;

    // Coded by Mayur
}