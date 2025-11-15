#include<iostream>
#include<array>
using namespace std;

void printArray(array<int, 4>& arr){
    
    for(int x : arr){
        cout<<x<<" ";
    }
}

int main() {
    
    array<int, 4> arr = {1, 2, 3, 4};
    printArray(arr);
    
}