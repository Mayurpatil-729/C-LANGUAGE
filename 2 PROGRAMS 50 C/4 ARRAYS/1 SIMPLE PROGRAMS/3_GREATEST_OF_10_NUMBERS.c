// Date :

#include <stdio.h>


int main()
{
    int arr[10];
    int i,large;

    printf("\t Program to print greatest of array elements :\n");
    printf("Enter any 10 numbers : ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    large=arr[0];
    
    for (i = 0; i < 10; i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }

    printf("\n\t Greatest of array elements == %d ",large);
    return 0;

    // Coded by Mayur
}
