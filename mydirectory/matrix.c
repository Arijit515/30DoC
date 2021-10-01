#include<stdio.h>
int main()
{
    int i,j,m,n,a[10][10],tr[10][10];
    printf("Enter the row and cloumn of the matrix:\n");
scanf("%d %d", &m,&n);
printf("Enter the array elements:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d",a[i][j]);
    }
printf("\n");
}
printf("The transpose matrix is:\n");
for ( i = 0; i < n; i++)
{
    for(j=0;j<m;j++)
    {
        tr[i][j]=a[j][i];
    }
}
for ( i = 0; i < n; i++)
{
    for(j=0;j<m;j++)
    {
        printf("%d",tr[i][j]);
    }
}
printf("\n");
return 0;
}




