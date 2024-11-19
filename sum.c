#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c,i,j,sum=0;
	printf("enter your row:");
	scanf("%d",&r);
	printf("enter your colum:");
	scanf("%d",&c);
	
	int a[r][c];
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
	
	
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 	  sum=sum+a[i][j];	
		 }
		 printf("\n");
	 }
	 printf("sum is 2d array:%d ",sum);
	
}