

// ##operator ==> is also called the tokern pasting operator because it appends
// ,or "pasters",tokens together.

#define VAR(name,num)  name##num

#include<stdio.h>
int main()
{
int x1 =125;
int x2 =400;
int x3 =64;

printf("%d\n",VAR(x,2));
return 0;
}