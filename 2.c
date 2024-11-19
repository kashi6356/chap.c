#include<stdio.h>

void main()
{
	table(5);
}

void table(int n)
{
	int i;

	for(i=1;i<=10;i++)
	{
		printf("%dx%d=%d\n",n,i,i*n);
		
	}
}