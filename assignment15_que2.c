//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest(int arr[],int m);
int main()
{
	int arr[100],n,i,size;
	printf("enter the size of array ");
	scanf("%d",&size);
	printf("enter the element of array ",size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	n=smallest(arr,size);
	printf("%d",n);
	return 0;
}
int smallest(int arr[],int m)
{
	int s,i;
	s=arr[0];
	for(i=0;i<m;i++)
	{
		if(s>arr[i])
			s=arr[i];
	}
	return s;
}
