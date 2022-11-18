// Date :

#include <stdio.h>
int main()
{
    int i, zeros = 0, positive = 0, negative = 0;
    int arr[10];
    printf("\t Program to calculate number of positive ,negative,zeros \n");
    printf("Enter array elements : ");

    for (i = 0; i < 10; i++)
    {
        scanf("\n%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == 0)
            zeros++;
        if (arr[i] > 0)
            positive++;             
        if (arr[i] < 0)
            negative++;
    }

    printf("\n\t No of zeros = %d", zeros);
    printf("\n\t No of positive = %d", positive);
    printf("\n\t No of negative = %d", negative);
    return 0;

    // Coded by Mayur
}