#include<stdio.h>
#include<conio.h>

void sum(int *a,int *b)
{
	int sum[2][2],i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			*(*(sum+i)+j)=(*(*(a+i)+j))+(*(*(b+i)+j));
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",sum[i][j]);
		}
		printf("\n");
	}
}
main()
{
	int i,j,a[2][2],b[2][2];
	printf("\n enter elements first  of array \n" );
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("\n enter elements second of array \n " );
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("\t%d",&b[i][j]);
		}
	}
	
	printf("\n elements of first array are=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
}
	printf("\n elements of second  array are=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	
	sum(a,b);
	
	
}
