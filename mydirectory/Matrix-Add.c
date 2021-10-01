#include<stdio.h>
int main()
{
	int a[2][2],i,j,b[2][2],c[2][2];
	printf("Enter the size in first matrix :\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
		printf("Element-[%d],[%d]:\n",i,j);
		scanf("%d",&a[i][j]);
	}
}printf("Input the size in Second matrix :\n");
		for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
		printf("Element-[%d],[%d]:\n",i,j);
		scanf("%d",&b[i][j]);
	}
}printf("\nThe First matrix is\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
		printf("%d ",a[i][j]);
	}printf("\n");
}
	printf("The Second matrix is\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
		printf("%d ",b[i][j]);
	}
	printf("\n");
}
	printf("The Addition of two matrix\n");
		for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		printf("%d ",c[i][j]);
	}
	printf("\n");
	
}
}