#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,s;
	
	printf("Enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements of array are \n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	s=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<s)
		{
			s=a[i];
		}
	}
	printf("smallest element is %d",s);
}
