#include<iostream>
using namespace std;
//Array Sorting using only if-else
int main(){
    
    int arr[4] = {90, 70, 20 ,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    
    cout <<"Before: ";
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    
    if(arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    cout <<"\n\nAfter: ";
    for(int i = 0; i<4; i++){
        cout<<arr[i]<<"\t";
    }
    if(arr[i+1]>arr[i+2]){
        int temp = arr[i+1];
        arr[i+1] = arr[i+2];
        arr[i+2] = temp;
    }
    cout <<"\n\nAfter: ";
    for(int i = 0; i<4; i++){
        cout<<arr[i]<<"\t";
    }
    if(arr[i+2]>arr[i+3]){
        int temp = arr[i+2];
        arr[i+2] = arr[i+3];
        arr[i+3] = temp;
    }
    cout <<"\n\nAfter: ";
    for(int i = 0; i<4; i++){
        cout<<arr[i]<<"\t";
    }
    if(arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    cout <<"\n\nAfter: ";
    for(int i = 0; i<4; i++){
        cout<<arr[i]<<"\t";
    }
    if(arr[i+1]>arr[i+2]){
        int temp = arr[i+1];
        arr[i+1] = arr[i+2];
        arr[i+2] = temp;
    }
    cout <<"\n\nAfter: ";
    for(int i = 0; i<4; i++){
        cout<<arr[i]<<"\t";
    }
    if(arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    
    cout <<"\n\nAfter: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    
    
    return 0;
}