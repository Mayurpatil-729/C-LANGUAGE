					    //no argument no return value

/*#include<stdio.h>
#include<conio.h>

 void add();
 void add()
   {
	 int x,y,z;
	 printf(" \n\nEnter two numbers=");
	 scanf("%d %d",&x,&y);
	 z=x+y;
	 printf("\n\nanswer=%d",z);
   }

void main()
{
clrscr();
printf("\n\nAddition of two nmbers.=");
add();
getch();
}
*/

							 //argument but no return value

/*#include<stdio.h>
#include<conio.h>

   void add(int x,int y,int z);
   void add(int x,int y,int z)
   {
	 printf(" \n\nEnter two numbers=");
	 scanf("%d %d ",&x,&y);
	 z=x+y;
	 printf("\n\nanswer=%d",z);
   }

void main()
{
int x,y,z;
clrscr();
printf("\n\nAddition of two nmbers.=");
add(x,y,z);
getch();
}
*/
									//argument and one return value
/* #include<stdio.h>
 #include<conio.h>

   int add(int x,int y,int z );
   int add(int x ,int y ,int z )
   {
	 printf(" \n\nEnter two numbers=");
	 scanf("%d %d ",&x,&y);
	 z=x+y;
	 printf("\n\nanswer=%d",z);
	 return 0;
   }
void  main()
{
int x,y,z;
clrscr();
printf("\n\nAddition of two nmbers.=");
add(x, y,z);
getch();
}
 */
								//no argument but return value
 #include<stdio.h>
 #include<conio.h>

   int add();
   int add()
   {
	 int x,y,z;
	 printf("\n\n Enter two numbers=");
	 scanf("%d %d ",&x,&y);
	 z=x+y;
	 printf("\n\nanswer=%d",z);
	 return 0;
   }
void  main()
{
int x,y,z;
clrscr();
printf("\n\nAddition of two nmbers.=");
add();
getch();
}