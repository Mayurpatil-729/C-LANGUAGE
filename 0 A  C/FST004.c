// Click on Submit in the IDE to proceed
#include <stdio.h>
#include <stdbool.h>

int main()
{

    // Integer
    int a = -5;
    printf("%d\n", a);

    // Double
    double b = 4.0;
    printf("%lf\n", b);

    // Character
    char c = 'a';
    printf("%c\n", c);

    // Integer array
    int array[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
        printf("%d ", array[i]);
    printf("\n");

    // String, ie, character array
    char string[] = "1234abc";
    printf("%s\n", string);

    // Boolean
    // Note: bools can be represented with the %d format specifier
    bool boolean = true;
    printf("%d\n", boolean);

    return 0;
}
