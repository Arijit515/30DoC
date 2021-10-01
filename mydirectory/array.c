#include<stdio.h>
int main(){
    int i,m,n,a[20],b[20], c[30],j,temp;
    printf("Enter the size of array 1:\n ");
    scanf("%d",&m);
    printf("Enter the size of array 2;\n");
    scanf("%d",&n);
    printf("Enter the array 1 elements:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements in first array are:\n");
    for ( i = 0; i < m; i++)
    {
        printf("%d",&a[i]);
    }
    printf("Enter the array 2 elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The elements in the second array are:\n");
    for (i=0; i<n;i++){
        scanf("%d",b[i]);
    }
printf("The array after merging is:\n");
int k=0;
for ( i = 0; i < n; i++)
{
    c[k++]=b[i];
}
for ( i = 0; i < k; i++)
{
    for ( j = i+1; j < k; j++)
    {
        if (c[i]>c[j])
        {
            temp = c[i];
            c[i]=c[j];
            c[j]=temp;
        }
        
    }
    
}
printf("%d",c[i]);
return 0;
}


