#include<stdio.h>
//Insertion Sort
void insertion(int arr[], int size){
    int i,j,key;
    for(i=1; i<size; i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
    int i,size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Elements of the Array:\n");
    for(i=0; i<size; i++){
        printf("Element-[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Initial Array: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    insertion(arr,size);
    printf("\nSorted Array: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
