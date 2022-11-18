// Date :

#include <stdio.h>
int main()
{
    int sp, pp;

    printf("\t Program for determine profit or loss \n");
    printf("Enter selling price = ");
    scanf("%d", &sp);
    printf("Enter purchase price = ");
    scanf("%d", &pp);

    if (sp == pp)
        printf("\tNeither loss nor profit");
    else
    {
        if (sp > pp)
            printf(" \t profitalble deal");
        else
            printf(" \t loss deal ");
    }
    return 0;
    // Coded by Mayur
}