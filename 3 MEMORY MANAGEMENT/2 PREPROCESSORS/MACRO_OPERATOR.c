
// # ==> macro operator is called the stringification
// or stringizing operato and tells the preprocessor to convert a parameter
// to a string constant.
// white space on either side of the argument are ignored and escape sequences are recognized

#include<stdio.h>

#define TO_STR(x) #x

int main()
{

    printf("%s\n", TO_STR(123\\12));
    return 0;
}
