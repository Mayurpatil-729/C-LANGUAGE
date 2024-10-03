/* Kruskals Algorithm for Minimum Spanning Tree */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
void main()
{
 clrscr();
 printf("\n\t**Implementation of Kruskal's algorithmnn**");
 printf("\n\tEnter the no. of vertices:");
 scanf("%d",&n);
 printf("\n\tEnter the cost adjacency matrix:");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   scanf("%d",&cost[i][j]);
   if(cost[i][j]==0)
    cost[i][j]=999;
  }
 }
 printf("\n\tThe edges of Minimum Cost Spanning Tree are:");
 while(ne<n)
 {
  for(i=1,min=999;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    if(cost[i][j]<min)
    {
     min=cost[i][j];
     a=u=i;
     b=v=j;
    }
   }
  }
  u=find(u);
  v=find(v);
  if(uni(u,v))
  {
   printf("\n\tEdge No. %d= (%d , %d) = %d",ne++,a-1,b-1,min);
   mincost +=min;
  }
  cost[a][b]=cost[b][a]=999;
 }
 printf("\n\tMinimum Cost = %d",mincost);
 getch();
}
int find(int i)
{
 while(parent[i])
  i=parent[i];
 return i;
}
int uni(int i,int j)
{
 if(i!=j)
 {
  parent[j]=i;
  return 1;
 }
 return 0;
}

/* Output
**Implementation of Kruskal's algorithmnn**

Enter the Number of Vertices: 6

Enter the cost adjacency matrix:
0 3 1 6 0 0
3 0 5 0 3 0
1 5 0 5 6 4
6 0 5 0 0 2
0 3 6 0 0 6
0 0 4 2 6 0

The edges of Minimum Cost Spanning Tree are:
Edge No. 1:(0 , 2) : 1
Edge No. 2:(3 , 5) : 2
Edge No. 3:(0 , 1) : 3
Edge No. 4:(1 , 4) : 3
Edge No. 5:(2 , 5) : 4

Minimum Cost = 13
*/