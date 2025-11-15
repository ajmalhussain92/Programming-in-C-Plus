#include<stdio.h>
//bubble sort
void bubble(int arr[], int size){
    int i,j,temp;
    for(i=0; i<size; i++){
        for(j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
    int main(){
    int i,size;
    printf("enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array: \n");
    for(i=0; i<size; i++){
        printf("Element-[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Array before sort: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    bubble(arr,size);
    printf("\nArray after sort: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
