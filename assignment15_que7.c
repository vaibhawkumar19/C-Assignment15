//7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
void count_number(int ar[],int siz);
int main()
{
	int arr[100],size,i;
	printf("enter the size of array ");
	scanf("%d",&size);
	printf("enter the element of array ",size);
	
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	count_number(arr,size);
}
void count_number(int ar[],int siz)
{
	int i,j,count=0;
	for(i=0;i<siz;i++)
	{
		for(j=i+1;j<siz;j++)
		{
			if(ar[i] == ar[j])
				count++;
				break;
		}
	}
	printf("total number of duplicate element in array ");
	for(i=0;i<siz;i++);
	{

		printf("%d ",count);
		}
}
