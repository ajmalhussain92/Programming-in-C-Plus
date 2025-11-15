#include<stdio.h>
//Selection Sort
void selection(int arr[],int size){
    int i,j,min,temp;
    for(i=0; i<size-1; i++){
        min=i;                  //min has index value
        for(j=i+1; j<size; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        //swapping
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
//Easy C_Code by: Ajmal Hussain
int main(){
    int i,size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Elements of the Array:\n");
    for(i=0; i<size; i++){
        printf("Elemenet-[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Initial Array: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    selection(arr,size);
    printf("\nSorted Array: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}


