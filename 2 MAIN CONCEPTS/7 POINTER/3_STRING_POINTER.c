/* Program : printing address of each char in the string using pointer variable */
#include<stdio.h>
int main()
{
	char str[6] = "HELLO";
	char *ptr;
	int i;
	//clrscr();
	//string name itself a base address of the string
	ptr = str; //ptr references str
	for(i = 0; str[i] != '\0'; i++)
		printf("Address of str[%d] = %u and Character is %c\n",i,ptr+i,str[i]);
	return 0;
	// getch();
}

/*Output

Address of str[0] = 65522 and Character is H
Address of str[1] = 65523 and Character is E
Address of str[2] = 65524 and Character is L
Address of str[3] = 65525 and Character is L
Address of str[4] = 65526 and Character is O
*/


