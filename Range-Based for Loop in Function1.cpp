#include<iostream>
using namespace std;

void printArray(int (&arr)[4]){
    
    for(int x : arr){
        cout<<x<<" ";
    }
}

int main() {
    
    int arr[] = {1, 2, 3, 4};
    printArray(arr);
}
/*
int (&arr)[4] specifies that the function takes a reference to an array of size 4.

*/