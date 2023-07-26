//Function Example2 : When Function Definition comes first & Function Call comes later in Program//
//In this case, Function Declaration is not Essential when function return type is void//

void fun2(int x,int y)            //Function Definition
{
	int c;
	c= x+y;
	printf("\n Addition = %d",c);
	getch();
}

void main()
{
	int a=10,b=20;
	clrscr();
	fun2(a,b); //Function Call
	getch();
}

/*Output
Addition = 30*/
