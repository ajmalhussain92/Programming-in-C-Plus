#include<stdio.h>
//Array Deleting 
int main(){
    int i,size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element of the array:\n");
    for(i=0; i<size; i++){
        printf("Element[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Initial Array: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int pos;
    printf("Enter the position : ");
    scanf("%d",&pos);
    for(i=pos-1; i<size; i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("Updated Array: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
