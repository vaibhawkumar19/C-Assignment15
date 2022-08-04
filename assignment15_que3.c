//3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
void shorting(int a[],int n);
int main()
{
	int arr[100],i,size;
	printf("entert the size of array ");
	scanf("%d",&size);
	printf("enter the element of array ");
	for(i=0;i<size;i++)
	
		scanf("%d",&arr[i]);
	shorting(arr,size);
return 0;
}
void shorting(int a[],int n)
{
	int tmp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}

	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
return ;
}
