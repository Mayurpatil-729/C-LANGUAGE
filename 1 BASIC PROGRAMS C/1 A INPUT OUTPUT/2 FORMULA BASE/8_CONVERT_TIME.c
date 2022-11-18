//Date :

#include <stdio.h>
int main()
{
    int min,sec,t;
    printf("\t program for seconds to minute and seconds \n");
    printf("Enter time in seconds =: ");
    scanf("%d",&t);
    min=t/60;
    sec=t%60;
    printf("\nMinute =%d \nSeconds =%d",min,sec);

    // Coded by Mayur
    return 0;
}