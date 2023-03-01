
// Date :

#include <stdio.h>
// #define x 10

int main()
{
    int x = 10;

    // increment
    // x++  ==> postfix ==> evaluates the expression and then performs the incrementing
    //++x  ==> prefix ==> increments the value and then proceeds with the expression

    // decrement
    //  x-- ==> postfix ==>
    //--x ==> prefix  ==>

    // increments the value of x ,and then assigns it to y.
    // x=5;
    // y=++x;
    // x is 6,y is 6

    // assigns the value of x to y, and then increments it.
    // x=5;
    // y=x++;
    // x is 6,y is 5

    printf("\nx++  : %d  ", x++);
    printf("\nx = %d", x);

    // printf("x++  : %d  ",++x);
    // printf("--x  : %d  ",x--);
    // printf("--x  : %d  ",--x);
    // printf("x++  : %d  ",x--x);
    // printf("x++  : %d  ",x++x);
    // printf("x++  : %d  ",--x++x);

    return 0;

    // Coded by Mayur
}
