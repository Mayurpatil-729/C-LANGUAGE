/*Implementation of 0/1 Knapsack Using Dynamic Programming*/

#include<stdio.h>

int max(int a, int b)
{
	return (a > b)? a : b;
}

int knapsack(int size, int weight[], int profit[], int n)
{
   int i, j;
   int K[100][100];

   for (i = 1; i <= n; i++)
   {
       for (j = 0; j <= size; j++)
       {
	   if (i==0 || j==0)
	   {
		K[i][j] = 0;
		printf("\n K[%d][%d] = %d",i,j,K[i][j]);
		getch();
	   }


	   else if (weight[i-1] <= j)
	   {

		K[i][j] = max(profit[i-1] + K[i-1][j-weight[i-1]],  K[i-1][j]);
		printf("\n K[%d][%d] = %d",i,j,K[i][j]);
		getch();
	   }
	   else
	   {
		 K[i][j] = K[i-1][j];
		 printf("\n K[%d][%d] = %d",i,j,K[i][j]);
		 getch();
	   }
       }
   }

   return K[n][size];
}

void main()
{
    int i, n, weight[20], profit[20], size;
    clrscr();

    printf("Enter number of items:");
    scanf("%d", &n);

    printf("Enter weight and value of items:\n");
    for(i = 0;i < n; ++i)
    {
	scanf("%d%d", &weight[i], &profit[i]);
    }

    printf("Enter size of knapsack:");
    scanf("%d", &size);

    printf("\nMax Profit = %d", knapsack(size, weight, profit, n));
    getch();
}

/*Output
Enter number of items:4
Enter weight and value of items:
1 10
3 40
4 50
5 70
Enter size of knapsack:7
Max Profit = 90
*/