/* One Simple C  Program to conclude Pointer */

// #include<stdio.h>
// int main()
// {
// 	int x=10;
// 	int *y=&x;

// 	printf("\n Value of x=%d",x);
// 	printf("\n Address of x=%u",&x);

// 	printf("\n Value contained in y=%u",y);
// 	printf("\n Address of y=%u",&y);
// 	printf("\n Value at address pointed by y=%d",*y);

//     return 0;
// 	//getch();
// }

/* Output of the Program

	Value of x=			10
	Address of x=			65524
	Value contained in y=	65524
	Address of y=			65522
	Value at address pointed by y=	10
*/

// Date :

#include <stdio.h>
int main()
{
	int i = 100;
	int *ptr = &i;

	printf("\nThe value of i = %d", i);
	printf("\nThe address of i =%u", &i);
	printf("\nThe value of ptr = %d", ptr);
	printf("\nThe address of ptr =%u", &ptr);
	printf("\nThe value which is inside the specified address,\nthe data inside the address of i =%d", *ptr);
	// pointer to address of i
	printf("\nThe pointer to address of i =%d", *(&i));
	//
	return 0;

	// Coded by Mayur
}