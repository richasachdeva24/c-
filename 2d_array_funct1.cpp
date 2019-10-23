#include<stdio.h>
#include<conio.h>
void fun(int arr[][2])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",arr[i][j]);
		}	
	}
}
main()
{
	int arr[2][2]={1,2,3,4};
	
	fun(arr);
}

