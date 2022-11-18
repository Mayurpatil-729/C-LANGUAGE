/* Program to Perform Binary Search*/

#include<stdio.h>
int main()
{
	int first,last,mid,a[10],i,key,flag=0;
	
	printf("Enter 10 elements of array");

	for (i=0; i<10; i++)
		scanf("%d",&a[i]);

	printf("Enter key=");
	scanf("%d",&key);

	first=0;
	last=9;
	do
	{
		mid=(first+last)/2;
		if(key==a[mid])
		{
			flag=1;
			break;
		}

		if(key<a[mid])
			last=mid-1;

		if(key>a[mid])
			first=mid+1;
	}while(first<=last);

if(flag==1)
	printf("Element %d is Found at %d position",key,mid);
else
	printf("Element %d Not Found in array",key);

return 0;
}

/*Output
Enter 10 elements of array
13 25 37 42 54 67 71 83 91 97
Enter key= 91
Element 91 is Found at 8 position */

