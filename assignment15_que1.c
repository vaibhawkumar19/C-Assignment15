//Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest(int arr[],int m);
int main()
{
	int arr[100],n,i,size;
	printf("enter the size of array ");
	scanf("%d",&size);
	printf("enter the element of array ",size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	n=greatest(arr,size);
	printf("%d",n);
	return 0;
}
int greatest(int arr[],int m)
{
	int max=0,i;
	for(i=0;i<m;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	return max;
}
