/* Find Kth smallest element in array */

#include<stdio.h>
int partition(int A[],int,int );

void  swap(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}

/* n is total no of element in array , k is for kth smallest element */
int kthsmallest(int  A[],int n, int k)
{
	int i=0,flag=0;
	int p,q,r;
	printf("\n\t K = %d",k);
	p=0;
	r=n-1;
	k--;

	while(!flag)
	{
		q=partition(A,p,r);
		if(q==k)
			flag=1;
		else if(k<q)
		{
			r=q-1;
		}
		else
		{	p=q+1;
		}
	}
return A[k];
}

int partition(int A[],int p,int r)
{
int i,j,pivot;
i=p-1;
pivot=A[r];
for(j=p;j<r;j++)
{
   if(A[j]<pivot)
   {
	i++;
	swap(&A[j],&A[i]);
   }
}
swap(&A[i+1],&A[r]);
return i+1;
}

void main()
{

int Arr[]={70,20,90,50,100,10,80,30,60,40};
int result;
clrscr();
result=kthsmallest(Arr,10,3);

printf("\n\tKth Smallest= %d ",result);
getch();

//return 0;
}