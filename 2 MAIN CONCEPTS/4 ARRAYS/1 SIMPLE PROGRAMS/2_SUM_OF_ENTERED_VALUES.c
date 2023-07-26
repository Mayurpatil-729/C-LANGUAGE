// Date :

#include <stdio.h>
int main()
{
    int arr[10];
    int i, sum=0;

    printf("\t Program to calculate sum of array elements :\n");
    printf("Enter any 10 numbers : ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("\n\t Sum of array elements = %d ", sum);
    return 0;

    // Coded by Mayur
}











