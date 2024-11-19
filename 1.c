#include<stdio.h>

void main()
{
	table();
}

void table()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%dx%d=%d\n",n,i,i*n);
		
	}
}