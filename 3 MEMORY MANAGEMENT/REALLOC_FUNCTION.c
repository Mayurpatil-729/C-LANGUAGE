

// Date :

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = malloc(10 * sizeof(ptr));
    if (ptr != NULL)
    {
        *(ptr + 2) = 50; /* assign 50 to third int */
    }

    ptr = realloc(ptr, 100 * sizeof(*ptr));
    *(ptr + 30) = 75;

    printf("you program run successfully !");

    return 0;

    // Coded by Mayur
}

// *realloc function expands a current block to include additional memory
// *realloc leaves the original content in memory and expand the bloack to allow more storage