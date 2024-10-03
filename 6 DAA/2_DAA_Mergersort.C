/* Implementation of Merge Sort*/

#include<stdio.h>
#include<conio.h>

void merge( int [],int ,int, int);
void part( int [],int,int);

void main()
{
	int arr[30];
	int i,size;

	clrscr();

	printf("\n\t--------Merge Sorting Method-------\n\n");

	printf("\n Enter Total No. of Elements:");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("\n Enter %d Element :",i+1);
		scanf("%d",&arr[i]);
	}

	part(arr,0,size-1);

	printf("\n\t------Merged Sorted Elements--------\n\n");
	for(i=0;i<size;i++)
	{
		printf("\t%d",arr[i]);
	}
getch();
}

void part(int arr[],int min,int max)
{
	int mid;

	if(min<max)
	{
		mid = (min + max)/2;

		part(arr,min,mid);

		part(arr,mid+1,max);

		merge(arr,min,mid,max);
	}
}

void merge(int arr[],int min,int mid,int max)
{
	int tmp[30];
	int i,j,k,m;

	j = min;
	m = mid+1;

	for(i=min ; (j<=mid && m<=max) ; i++)
	{
		if(arr[j] <= arr[m])
		{
			tmp[i] = arr[j];
			j++;
		}
		else
		{
			tmp[i] = arr[m];
			m++;
		}
	}

	if(j>mid)
	{
		for(k=m; k<=max; k++)
		{
			tmp[i] = arr[k];
			i++;
		}
	}
	else
	{
		for(k=j; k<=mid; k++)
		{
			tmp[i] = arr[k];
			i++;
		}
	}

	for(k=min;k<=max;k++)
	{
		arr[k] = tmp[k];
	}
}

/*Output
Enter Total No. of Elements: 14

Enter Elements : 66 33 40 22 55 88 60 11 80 20 50 44 77 30

------Merged Sorted Elements--------
11 20 22 30 33 40 44 50 55 60 66 77 80 88 */



