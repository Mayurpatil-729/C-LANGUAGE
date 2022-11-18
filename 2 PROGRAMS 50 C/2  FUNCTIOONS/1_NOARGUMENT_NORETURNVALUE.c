// Date :

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void add();

int main()
{

    printf("Addition of two nos = ");
    add();

    return 0;
    // Coded by Mayur
}
void add()
{
    int n1, n2, ans;

    printf("\t Program for addition of two no.s : \n");
    printf("Enter any 2 numers : ");
    scanf("%d \n%d", &n1, &n2);
    ans = n1 + n2;
    printf("\n\t Answer =%d", ans);
}