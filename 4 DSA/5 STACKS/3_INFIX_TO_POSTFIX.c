/* Program For Conversion Of Infix Expression To Postfix Expression */

#include<string.h>

char stack[100];
int top=-1;

void push(char);
char pop();
int isempty();
int isoperand(char);
int prior(char);
int priorcomp(char,char);

void main()
{
   char infix[100],z,postfix[100]="",s;/* use pointers for lengthy expressions*/
   int i=0,k=0;
   push('#');
   clrscr();
   printf("Enter the infix expression:");
   scanf("%s",infix);

   while(infix[i]!='\0')
   {
    z=infix[i++];

     if(isoperand(z))
	 postfix[k++]=z;
     else
     {
	if(z == '(' )
	{
	   push(z);
	   continue;
	}

	if(z == ')' )
	{
	   while( (s=pop()) != '(' )   //UNSTACK UNTIL OPENING BRACKET
		postfix[k++]=s;
	   continue;
	}

	if( priorcomp(z, stack[top]))
	   push(z);
	else
	{
	    while( !priorcomp(z, stack[top]) )
		postfix[k++]=pop();

	    push(z);
	}
      }
   }

   while( !isempty() )
      postfix[k++]=pop();

   postfix[k]='\0';
   printf("\nThe postfix string is:%s",postfix);

   getch();

}

void push(char y)
{
    top++;
    stack[top]=y;
}


char pop()
{
    char a;
    a=stack[top];
    top--;
    return a;
}

int isempty()
{
    if(top == 0)
       return 1;
    else
       return 0;
}

int isoperand(char z)
{
   if((z!='+' && z!='-' && z!='*' && z!='/' && z!='('&& z!=')'&& z!='^'))
     return 1;
   else
     return 0;
}
int prior(char i)
{
  switch(i)
  {
    case '+'  : return 1;
    case '-'  : return 1;
    case '*'  : return 2;
    case '/'  : return 2;
    case '^'  : return 3;
    case '#'  : return -1;
  }
  return 0;
}

int priorcomp(char a,char b)
{
  if(prior(a)>prior(b))
     return 1;
  else
     return 0;
}


