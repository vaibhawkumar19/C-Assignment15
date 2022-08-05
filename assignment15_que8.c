//8. Write a function in C to print all unique elements in an array.
// test case :- 2,2,4,5,5,6,6:- 4 is unique;
#include<stdio.h>
void unique(int ar[],int siz);
int main()
{
	int arr[100],size,i;
	printf("enter the size of array ");
	scanf("%d",&size);
	printf("enter the element of array ",size);
	
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	unique(arr,size);
}
void unique(int ar[],int siz)
{
	int i,j,count,k;
	for(i=0;i<siz;i++)
	{
		count=0;
		for(j=0,k=siz;j<k+1;j++)
		{
			if(i!=j)
			{
			if(ar[i] == ar[j])
				count++;
		}
	}

	if(count==0)
	printf("%d ",ar[i]);
}}
