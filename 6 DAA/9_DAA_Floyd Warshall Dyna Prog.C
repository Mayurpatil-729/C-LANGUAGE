/*Implementation of Floyd Warshall Algorithm*/

#include<stdio.h>
int i, j, k,n,dist[10][10];
void floydWarshell ()
{
 for (k = 0; k < n; k++)
  for (i = 0; i < n; i++)
   for (j = 0; j < n; j++)
    if (dist[i][k] + dist[k][j] < dist[i][j])
     dist[i][j] = dist[i][k] + dist[k][j];
}
void main()
{
  int i,j;
  clrscr();
  printf("\n\tEnter no of Vertices :");
  scanf("%d",&n);
  printf("\n");
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   {
    printf("\n\tDist[%d][%d]:",i,j);
    scanf("%d",&dist[i][j]);
   }
 floydWarshell();
 printf (" \n\tShortest Distances between Every Pair of Vertices:\n");
 for (i = 0; i < n; i++)
 {
  for (j = 0; j < n; j++)
   printf ("\t%d\t", dist[i][j]);
  printf("\n");
 }
 getch();
}

/*output:-
enter no of vertices :4

dist[0][0]:0
dist[0][1]:8
dist[0][2]:999
dist[0][3]:1

dist[1][0]:999
dist[1][1]:0
dist[1][2]:1
dist[1][3]:999

dist[2][0]:4
dist[2][1]:999
dist[2][2]:0
dist[2][3]:999

dist[3][0]:999
dist[3][1]:2
dist[3][2]:9
dist[3][3]:0

shortest distances between every pair of vertices
0       3       4       1
5       0       1       6
4       7       0       5
7       2       3       0
*/