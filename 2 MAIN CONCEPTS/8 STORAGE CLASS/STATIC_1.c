//! static :Storage: Memory.
//! Default value : Zero.Scope : Local to the block in which the variable is defined.
//! Life : Value of the variable persists between different function calls.
//!

// // Date :

#include <stdio.h>
static int a;
int main()
{

    // static int a;
    printf("value of a : %d ", a);

    return 0;

    // Coded by Mayur
}

// #include <stdio.h>
// void increment();
// int main()
// {
//     increment();
//     increment();
//     increment();
//     return 0;
// }

// void increment()
// {
//     static int i = 1;            //* before program excution
//     printf("%d\n", i);
//     i = i + 1;
//     printf("%d\n", i);
// }