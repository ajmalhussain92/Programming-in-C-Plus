#include<iostream>
#include<typeinfo>
using namespace std;
//Pointer to a constant

int main(){
    
    int x = 10;
    int y = 20;
    
    const int* ptr;
    
    cout << &ptr <<endl;
    
    ptr = &x;
    
    // *ptr = 15;       error: value cannot be changed
    
    cout << "x = "<<*ptr <<endl;
    
    ptr = &y;           //but address can be changed
    
    cout << "y = "<<*ptr <<endl;
    cout<<&ptr<<endl;
    
    
    // cout<<typeid().name();
    
    
    return 0;
}