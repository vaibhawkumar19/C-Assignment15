//6. Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void values(int arr[]);
int main()
{
	int ar[10];
		values(ar);
}
void values(int arr[])
{
	int i;
	printf("enter the 10 numbers");
	for(i=0;i<=9;i++)
	scanf("%d",&arr[i]);
	for(i=9;i>=0;i--)
	printf("%d ",arr[i]);
	return;
}
