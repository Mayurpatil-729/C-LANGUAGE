/*Factorial Simple Program*/

#include<stdio.h>  
void main()
{
	int i,fact=1,number;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&number);

	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}

	printf("Factorial of %d is: %d",number,fact);

getch();
}

/*Enter a number: 5
Factorial of 5 is: 120*/