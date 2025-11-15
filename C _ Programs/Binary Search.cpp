#include <stdio.h>
//Binary Search 
int binarySearch(int arr[], int value, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (arr[mid] == value)
      return mid;

    // Search the left half
    if (arr[mid] > value)
      return binarySearch(arr, value, low, mid - 1);

    // Search the right half
    return binarySearch(arr, value, mid + 1, high);
  }

  return -1;
}
//Easy C_Code by: Ajmal Hussain
int main(){
    int i,size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
  int arr[size];
  printf("Enter Elements of Array:\n");
  for(i=0; i<size; i++){
      printf("Element-[%d]: ",i);
      scanf("%d",&arr[i]);
  }
  printf("Current Array: ");
  for(i=0; i<size; i++){
      printf("%d ",arr[i]);
  }
  int value;
  printf("\nEnter Element to be searched: ");
  scanf("%d",&value);
  int result = binarySearch(arr, value, 0, size - 1);
  if (result == -1)
    printf("Element not found !");
  else
    printf("Element %d found at position %d",value, result+1);
}