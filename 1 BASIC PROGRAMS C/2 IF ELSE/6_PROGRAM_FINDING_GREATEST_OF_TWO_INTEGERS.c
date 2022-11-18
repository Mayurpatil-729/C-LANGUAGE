//Date :

#include <stdio.h>
int main()
{
    int fno,sno;
    
    printf("\t Program for finding greatest of two integes :");
    printf(" \n Enter the first number and second number = ");
    scanf("%d \n%d",&fno,&sno);

    if (fno==sno)
    printf(" Both number are same ");
    else
    {
        if(fno>sno)
            printf(" \n  %d number is greater ",fno);
        else
            printf(" \n  %d number is greater",sno);
    }
    return 0;

// Coded by Mayur
}