//Function Example1 : When Function Call comes first & Function Definition comes later in Program//
//In this case, Function Declaration is Essential When Function return type is void//

void fun1(int x,int y); //Function Declaration

void main()
{
	int a=10,b=20;
	clrscr();
	fun1(a,b); //Function Call
	getch();
}
void fun1(int x,int y)            //Function Definition
{
	int c;
	c= x+y;
	printf("\n Addition = %d",c);
	getch();
}

/*Output
Addition = 30*/