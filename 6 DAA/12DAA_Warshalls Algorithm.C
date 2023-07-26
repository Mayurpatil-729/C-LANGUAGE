/* Compute Transitive Clouser by Warshalls Algorithm*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int max(int,int);
void warshal(int p[10][10],int n)
{
 int i,j,k;
 for(k=1;k<=n;k++)
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
    p[i][j]=max(p[i][j],p[i][k]&&p[k][j]);
}
int max(int a,int b)
{                                                       ;
if(a>b)
 return(a);
else
 return(b);
}
void main()
{
 int p[10][10]={0},n,e,u,v,i,j;
 clrscr();
 printf("\n\tEnter the Number of Vertices:");
 scanf("%d",&n);
 printf("\n\tEnter the Number of Edges:");
 scanf("%d",&e);
 for(i=1;i<=e;i++)
 {
  printf("\n\tEnter the End Vertices of Edge %d:",i);
  scanf("%d%d",&u,&v);
  p[u][v]=1;
 }
 printf("\n\tMatrix of Input Data:\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
   printf("\t%d",p[i][j]);
  printf("\n");
 }
 warshal(p,n);
 printf("\n\tTransitive Closure by Warshall:\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
   printf("\t%d",p[i][j]);
  printf("\n");
 }
 getch();
}

/*Output

Enter the Number of Vertices: 4

Enter the Number of Edges: 3

Enter the End Vertices of Edge 1:1 2

Enter the End Vertices of Edge 2:2 3

Enter the End Vertices of Edge 3:3 4

Matrix of Input Data:
0 1 0 0
0 0 1 0
0 0 0 1
0 0 0 0

Transitive Closure by Warshall:
0 1 1 1
0 0 1 1
0 0 0 1
0 0 0 0
*/