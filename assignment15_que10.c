//10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void frequency(int ar[],int siz);
int main()
{
	int arr[100],size,i;
	printf("enter the size of array ");
	scanf("%d",&size);
	printf("enter the element of array ",size);
	
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	frequency(arr,size);
}
void frequency(int ar[],int siz)
{
	int i,j,count,k;
	for(i=0;i<siz;i++)
	{
		count=0;
		for(j=0,k=siz;j<k+1;j++)
		{
			if(ar[i] == ar[j])
				count=count+ar[i];
		}
	}

	if(count)
	printf("%d ",count);
}
