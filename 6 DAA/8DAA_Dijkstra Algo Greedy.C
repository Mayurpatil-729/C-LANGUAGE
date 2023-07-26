// DijKstra's Shortest Path Algorithm

#include "stdio.h"
#include "conio.h"
#define infinity 999
 
void dij(int n,int v,int cost[10][10],int dist[])
{
 int i,u,count,w,flag[10],min;

 for(i=1;i<=n;i++)
      flag[i]=0,dist[i]=cost[v][i];
 count=2;
 while(count<=n)
 {
  min=99;
  for(w=1;w<=n;w++)
     if(dist[w]<min && !flag[w])
	  min=dist[w],u=w;
   flag[u]=1;
   count++;
  for(w=1;w<=n;w++)
     if((dist[u]+cost[u][w]<dist[w]) && !flag[w])
	 dist[w]=dist[u]+cost[u][w];
 }
}

void main()
{
 int n,v,i,j,cost[10][10],dist[10];
 clrscr();
 printf("\n Enter the number of nodes:");
 scanf("%d",&n);
 printf("\n Enter the cost matrix:\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {
   scanf("%d",&cost[i][j]);
   if(cost[i][j]==0)
    cost[i][j]=infinity;
  }
 printf("\n Enter the Source Node:");
 scanf("%d",&v);
 dij(n,v,cost,dist);
 printf("\n Shortest path:\n");
 for(i=1;i<=n;i++)
  if(i!=v)
   printf("%d->%d,cost=%d\n",v,i,dist[i]);
 getch();
}

/*Output
Enter the no of nodes 4
Enter the cost matrix
0 10 1 15
10 0 2 3
1 2 0 20
15 3 20 0

Enter the source Node 1
Shortest path:
1->2, cost=3
1->3, cost=1
1->4, cost=6
*/
