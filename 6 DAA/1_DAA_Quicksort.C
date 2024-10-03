/*Implementation of Quick Sort*/

#include<stdio.h>
#include<conio.h>
//Function Declaration
void qsort(int [],int,int);
int partition(int [],int,int);

void main()
{
	int a[50],i,n;
	clrscr();

	printf("\n Enter Size of Array:");
	scanf("%d",&n);

	printf("\n Enter Array Elements:\n");

	for(i=0;i<n;i++)
	{
		printf(" Enter %d Element:",i+1);
		scanf("%d",&a[i]);
	}

	//Function Call
		qsort(a,0,n-1);

	//Print Array
	printf("\n Sorted Array is : ");

	for(i=0;i<n;i++)
	{
		printf("%d\n\t\t",a[i]);
	}
	getch();
}

//Function Definition
void qsort(int a[],int l,int u)
{
	int j;

	if(l<u)
	{
		j= partition(a,l,u);

		qsort(a,l,j-1);

		qsort(a,j+1,u);
	}
}

int partition(int a[],int l, int u)
{
	int v,i,j,temp;

	v = a[l];

	i = l;
	j = u+1;

	do
	{
		do
		{
			i++;
		}while(a[i] < v && i<=u);

		do
		{
			j--;
		}while(v<a[j]);

		if(i<j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}while(i<j);

	a[l]= a[j];
	a[j] = v;

	return(j);
}

/* Output
Enter Size of Array : 12

Enter Array Elements : 44 33 11 55 77 90 40 60 99 22 88 66

Sorted Array is: 11 22 33 40 44 55 60 66 77 88 90 99
*/


