#include<stdio.h>

void main()
{
   vote(56);	
}
void vote(int n)
{
	if(n>=18)
	{
		printf("eligible for vote!");
	}
	else
	{
		printf("not eligible for vote ");
	}
}