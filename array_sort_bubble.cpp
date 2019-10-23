#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i,a[i],n,j,t;
	
	printf("Enter size of array");
	scanf("%d",&n);
	printf("Enter elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	printf("elements of sorted array are  ");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	
}
