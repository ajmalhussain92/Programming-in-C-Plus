#include<stdio.h>
//Sorting the Unsorted Array then performing BinarySearch !!
void insertion(int arr[], int n);
int binarySearch(int new_arr[], int value, int l, int r);
//Easy C_Code by: Ajmal Hussain
int main(){
    int i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of Array:\n");
    for(i=0; i<n; i++){
        printf("Element-[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Current Array: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    insertion(arr,n);
    printf("\nSorted Array: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    //Copying old array to new_array
    int new_arr[100];
    for(i=0; i<n; i++){
        new_arr[i]=arr[i];
    }
    
    int value;
    printf("\nEnter value to be searched: ");
    scanf("%d",&value);
    int res=binarySearch(new_arr,value,0,n-1);
    if(res==-1){
        printf("\nElement %d not found! ",value);
    }else{
        printf("\nElement %d found at position %d",value,res+1);
    }
    return 0;
}
//Easy C_Code by: Ajmal Hussain
void insertion(int arr[], int n){
    int i,j,key;
    for(i=1; i<n; i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int binarySearch(int new_arr[], int value, int l, int r){
    if(r>=l){
        int mid=l+(r-l)/2;
        if(new_arr[mid]==value)
        return mid;
        if(new_arr[mid]>value)
        return binarySearch(new_arr, value, l, mid-1);
        if(new_arr[mid]<value)
        return binarySearch(new_arr, value, mid+1, r);
    }
    return -1;
}
