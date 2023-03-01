// Date :

#define LEVEL 4

#include <stdio.h>
int main()
{
#if LEVEL > 6
    printf("hi");
#elif LEVEL > 5
    printf("hello");
#elif LEVEL > 4
    printf("hello everyone");
#else
    printf("hello ,how are you");
#endif

    return 0;
    // Coded by Mayur
}