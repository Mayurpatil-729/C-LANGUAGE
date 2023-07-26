//! Extern :-
//! Storage : Memory.
//! Default value : Zero.
//! Scope : Global.
//! Life : As long as the program’s execution doesn’t come to an end.

// Date :

#include <stdio.h>
int i;
void increment();
void decrement();
int main()
{
    printf("\ni = %d", i);
    increment();
    increment();
    decrement();
    decrement();
    return 0;
}

void increment()
{
    i = i + 1;
    printf("\non incrementing i = %d\n", i);
}

void decrement()
{
    i = i - 1;
    printf("on decrementing i = %d\n", i);
}