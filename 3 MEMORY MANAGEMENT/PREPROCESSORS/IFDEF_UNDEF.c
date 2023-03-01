//Date :

#include <stdio.h>
#define RATE 0.08
#ifndef TERM
#define TERM 24
#endif



int main()
{
    #ifdef RATE
    /*this branch will be compiled*/
    #undef RATE
    printf("\t Redefinig Rate ");
    #define RATE 0.068
    
    #else/* this branch will not be compiled */
    #endif
    printf("%f  %d\n ",RATE,TERM);
    
    return 0;

// Coded by Mayur
}