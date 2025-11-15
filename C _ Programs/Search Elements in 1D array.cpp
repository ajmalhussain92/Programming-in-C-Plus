#include<stdio.h>
//Array Searching
int main(){
    int size,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(i=0; i<size; i++){
        printf("Element-[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Array: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    int element;
    printf("\nEnter the element to be searched: ");
    scanf("%d",&element);
    for(i=0; i<size; i++){
        if(element==arr[i]){
            printf("The element %d found at position %d.",element,i+1);
            break;
        }
    }if(i==size){
        printf("Wrong element entered!!\n");
    }
    return 0;
}
