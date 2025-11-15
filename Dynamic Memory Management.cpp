#include <iostream>
#include <cstdlib>  // Required for malloc and free
#include <typeinfo>
using namespace std;
// Dynamic Memory Management

int main(){
    int* ptr1 = new int(10);  // Allocate an integer on the heap
delete ptr1;              // Deallocate the integer

int* arr = new int[5];   // Allocate an array of integers
delete[] arr;            // Deallocate the array

int* ptr2 = (int*)malloc(sizeof(int));  // Allocate memory for an int
    *ptr2 = 42;
    cout << *ptr2 << endl;
    free(ptr2);  // Free the memory
    
    
    return 0;
}