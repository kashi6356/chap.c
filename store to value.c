#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c,i,j;
	printf("enter your row:");
	scanf("%d",&r);
	printf("enter your colum:");
	scanf("%d",&c);
	
	int a[r][c] ,b[r][c],sum[i][j];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter 2d array a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
			
		}
		printf("\n");
	}
	
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",a[i][j]);
					
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter 2d array b[%d][%d]= ",i,j);
			scanf("%d",&b[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",&b[i][c]);
		}
		printf("\n");
	}
	
	 
	 printf("\nsum:\n");
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 	  sum[i][j]=a[i][j]+b[i][j];
		 }
		 printf("\n");
	 }
	 printf("sum is 2d array :%d ",sum[i][j]);
	
}