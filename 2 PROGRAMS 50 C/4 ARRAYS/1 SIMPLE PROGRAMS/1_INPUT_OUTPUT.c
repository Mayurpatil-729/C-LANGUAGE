// Date :

#include <stdio.h>
int main()
{
    int arr[10];
    int i;

    printf("\t Program to print array elements :\n");
    printf("Enter any 10 numbers : ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n\t You entered values are :");

    for (i = 0; i < 10; i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;

    // Coded by Mayur
}

// LOCAL DECLARATIONS
//      if values not given    arr [10]={}
//                                ==all values are zeros value

//     if at least one value is given arr[10]={50}
//                               ==excpet 50 ,all values are zero

//     if values not given    arr [10];
//                               ==all values are garbage value

// GLOBAL DECLARATIONS