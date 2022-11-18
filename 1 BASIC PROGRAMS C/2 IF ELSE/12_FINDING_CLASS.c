// Date :

#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5;
    float avg, total;

    printf("\t Program to finding class  \n");
    printf("\n\tEnter the Marks of Mathematics : ");
    scanf("%d", &s1);
    printf("\n\tEnter the Marks of Statistics : ");
    scanf("%d", &s2);
    printf("\n\tEnter the Marks of DSA : ");
    scanf("%d", &s3);
    printf("\n\tEnter the Marks of physics : ");
    scanf("%d", &s4);
    printf("\n\tEnter the Marks of Chemistry : ");
    scanf("%d", &s5);

    total = s1 + s2 + s3 + s4 + s5;
    avg = total / 5;

    if (avg > 70)
        printf("\n\t DISTINCTION");
    else
    {

        if (avg >= 60)
            printf("\n\t FIRST CLASS ");
        else if (avg >= 50)
            printf("\n\t  SECOND CLASS");
        else if (avg >= 40)
            printf("\n\t  THIRD CLASS");
        else
            printf("\n\t\t\t  CONGRATUALATION , YOU ARE FAIL ");
    }
    return 0;

    // Coded by Mayur
}