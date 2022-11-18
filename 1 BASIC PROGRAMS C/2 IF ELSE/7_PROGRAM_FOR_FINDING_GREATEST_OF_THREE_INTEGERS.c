//Date :

#include <stdio.h>
int main()
{
    int fno,sno,tno;
    
    printf("\t Program for finding greatest of two integes :");
    printf(" \n Enter the first number and second number and third number = ");
    scanf("%d\n%d\n%d",&fno,&sno,&tno);

    if (fno==sno  && sno==tno)
        printf(" All numbers are same ");
    else
    {
        if(fno>sno && fno>tno)
            printf(" \n  %d number is greater ",fno);
        else
        if (sno>fno && sno>tno)
            printf(" \n  %d number is greater",sno);
            else
                printf("\n %d number is greater",tno);
    }
    return 0;

// Coded by Mayur
}