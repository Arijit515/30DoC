#include <stdio.h>
void main()
{
  int i,j,arr1[50][50],sum=0,n,sum1=0;
  int m;
  printf("\nEnter the size of the square matrix :\n");
  scanf("%d", &n);
	printf("\nEnter elements in the first matrix :\n");
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
	    printf("\nElement - [%d],[%d] : ",i,j);
	    scanf("%d",&arr1[i][j]);
		 if (i==j) sum= sum+arr1[i][j];
		 if ((i+j)==n-1) sum1= sum1+arr1[i][j];
      }
        } 
        printf("\nThe matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	   printf("% 4d",arr1[i][j]);
	   printf("\n");
	 }
	 
    printf("\nSum of the right Diagonal elements is :%d\n",sum);
    
    printf("Sum of the left Diagonal elements is :%d\n",sum1);
}