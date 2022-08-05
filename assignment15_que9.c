//9. Write a function in C to merge two arrays of the same size sorted in descending order.
//arr1+arr2=40,30,20,19,18,17,16,15,14,13,12,11.....
# include<stdio.h>
void sumarray(int a[],int b[],int s,int m,int n);
int  main()
{
	int  a[25], b[25], s,n,i,j,m ;
	printf(" Enter the number of element in first array : ") ;
	scanf("%d",& n) ;
	printf("\n Enter the element of araay : \n") ;
		for (  i = 1 ; i <= n ; i++)
			scanf("%d",& a[i]) ;

	printf(" Enter the number of element in second array : ") ;
			scanf("%d",& m) ;
	printf("\n Enter the element of araay : \n") ;
		for (  i = 1 ; i <= m ; i++)
			scanf("%d",& b[i]) ;
			s=m+n;
		sumarray(a,b,s,m,n);
}
void sumarray(int a[],int b[],int s,int m,int n)
{
	int i, j, k=1, temp,sum[50] ;
	

	for (  i=1 ; i<=s ; i++)
		{
		if (  i <= n )
			sum[i] = a[i] ;
		else
		{
			sum[i] = b[k] ;
			k = k+1 ;
		}
	}

	for (  i = 1 ; i <= s ; i++)
	{
		for (  j = 1 ; j <= s ; j++)
		{
			if (  sum[i] >= sum[j] )
			{
				temp = sum[i] ;
				sum[i] = sum[j] ;
				sum[j] = temp ;
			}
		}
	}
	printf("\n Element of array after merging and sorting :\n") ;
		for (  i = 1 ; i <= s ; i++)
	printf("%d ",sum[i]) ;
return;
}

