#include<stdio.h>
#include<conio.h>
main()
{
	int arr[]={1,2,3,4,5};
	int *ptr;
	
	ptr = arr;
	
	printf("%d\n",arr);
	printf("%d\n",&arr);
	printf("%d\n",&arr[0]);
	printf("%d\n",ptr);
	printf("%d",*ptr);
	
/*	arr=&arr[0]
 	arr[i]= *(arr+i)
	arr[2]= *(100+2*4) */
	
}
