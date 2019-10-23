#include<stdio.h>
#include<conio.h>
main()
{
	int *ptr[5],i;
	
	int p=1,q=2,r=3,s=4,t=5;
	
	ptr[0]=&p;
	ptr[1]=&q;
	ptr[2]=&r;
	ptr[3]=&s;
	ptr[4]=&t;
	
	for(i=0;i<5;i++)
	{
		printf("%d",*ptr[i]);
	}
	
}
