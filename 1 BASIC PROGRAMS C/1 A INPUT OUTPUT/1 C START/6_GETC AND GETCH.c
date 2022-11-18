//Date :

#include <stdio.h>
int main()
{
    a=getc(stdin);
    b=getchar();

    printf("%c%c",a,b);

    printf("\t %c \n",getc(stdin)); // STANDARD 
    printf("\t %c \n",getchar());  

    printf("\t %c \n",getch());       //NON STANDARD
    printf("\t %c \n",getche());


    printf("\t %c \n");              //STANDARD
    putc(a,stdout)
    putchar(a)
    
    putch(a);       //NON STANDARD


    
    return 0;

// Coded by Mayur
}