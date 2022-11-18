
/* c automatically allocates space for the varialble in an
area of memory called the stack */

#include <stdio.h>
int main()
{
    int x;
    float y;
    long z;
    double a;

    printf("\t To check memory \n");

    printf("%d\n", sizeof(x)); // 4
    printf("%d\n", sizeof(y)); // 4
    printf("%d\n", sizeof(z)); // 4
    printf("%d\n", sizeof(a)); // 8

    printf("\n\t Memory of arrays :\n");

    int arr[10];
    printf("%d\n", sizeof(arr));

    float arr1[10];
    printf("%d\n", sizeof(arr1));

    long arr2[10];
    printf("%d\n", sizeof(arr2));

    double arr3[10];
    printf("%d\n", sizeof(arr3));

    return 0;

    // Coded by Mayur
}