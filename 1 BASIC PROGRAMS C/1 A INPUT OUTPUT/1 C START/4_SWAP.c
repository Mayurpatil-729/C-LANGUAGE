// Date :

#include <stdio.h>
int main()
{
    int fno, sno; // third variable
    printf("\n program for swaping numbers");
    printf("\n Enter the two numbers = ");
    scanf("%d\n%d", &fno, &sno);
    fno = fno + sno;
    sno = fno - sno;
    fno = fno - sno;
    printf("\nbefore swaping\nfno=%d\nsno=%d", fno, sno);
    printf("\n\nAfter swaping \nfno=%d\nsno=%d", fno, sno);
    return 0;
    // code by Mayur
}

/*  fno=fno-sno;
    sno=fno-sno;
    fno=sno-fno;

    fno=fno/sno;
    sno=fno*sno;
    fno=fno/sno;
*/