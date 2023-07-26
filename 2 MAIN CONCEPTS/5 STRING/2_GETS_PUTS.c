// Date :

#include <stdio.h>
int main()
{
    char fname[20];
    char lname[20];

    printf("\t program to display name \n");
    printf("Enter your name : ");
    scanf("%s", fname);

    printf("\nEntered first name is: %s ", fname);
    printf("\n\t size of fname is : %lu ", sizeof(fname));

    printf("\n\nEntered last name is : ");
    gets(lname);
    puts(lname);
    printf("\n\t size of fname is : %lu ", sizeof(lname));


    return 0;

    // Coded by Mayur
}