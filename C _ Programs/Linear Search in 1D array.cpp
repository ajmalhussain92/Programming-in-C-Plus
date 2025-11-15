#include<stdio.h>
//Easy C_Code by: Ajmal Hussain
//Array: Linear Search using Function
int linearSearch(int arr[], int size, int value){
    int i;
    for(i=0; i<size; i++){
        if(arr[i]==value){
            return i+1;
        }
    }
    return -1;       //Indicates failure or error, Also indicates outside the range, also written as -2 or -3 or -4 or something
}
int main(){
    int size;
    printf("Enter tthe size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elllements of the array: \n");
    for(int i=0; i<size; i++){
        printf("Element-[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nArray ready: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    int value;
    printf("Enter the value to be find : ");
    scanf("%d",&value);
    int r=linearSearch(arr,size,value);
    if(r==-1){
        printf("Elemnt not founnd!\n");
    }else{
        printf("Value %d found at position %d!",value,r);
    }
    return 0;
}

