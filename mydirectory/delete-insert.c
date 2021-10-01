#include<stdio.h>
int main(){
    int size,i,pos=0,n,a[50];
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    printf("Enter the elements of an array in Ascending order:\n");
    for(i=0;i<size;i++){
        printf("Enter element:\n");
        scanf("%d",&a[i]);
    }
    printf("The existing element of an array is:\n");
    for(i=0;i<size;i++){
        printf(" %d ",a[i]);
    }
    printf("\nEnter the position where to delete the element:\n");
    scanf("%d",&pos);
    if(pos<0 || pos>size+1){
        printf("Invalid position.\n");
    }
    for(i=pos-1;i<=size;i++){
        a[i]=a[i+1];
    }
    size--;
    printf("The new element of an array after the deletion of array is:\n");
    for(i=0;i<size;i++){
        printf(" %d ",a[i]);
    }
    return 0;
}