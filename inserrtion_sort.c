

 // ----> insertion sort <----


#include<stdio.h>
void insert(int a[],int n ){
	int i , key ,j;
	for(i=0;i<n;i++)
	{
		key = a[i];
		for(j=0;j>=0 && a[j] ;j--)
		{
			j = j-1;
		}
		a[j+1] = key;
	}
}
void printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n");
}
int main()
{
	int n,i;
	printf("enter the size");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(i=0;i<n;i++)
	{ 
		scanf("%d ",&a[i]);
	}
	 insert(a,n);
	printf("sorted array\n");
	 printarray(a,n);
}