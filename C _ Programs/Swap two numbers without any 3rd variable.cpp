#include<iostream>
using namespace std;
//Swap two numbers without any 3rd variable
int main(){
    float num1, num2;
    char op;
    
    cout<<"Enter first number: ";
    cin>>num1;
    
    cout<<"Enter second number: ";
    cin>>num2;
    
    cout <<"\nBefore swapping: \n";
    cout<<"Value of 1st number: "<<num1<<endl;;
    cout<<"Value of 2nd number: "<<num2<<endl;
    // num1 = 5, num2 = 10
    
    num1 = num1 + num2;     // num1 = 15
    num2 = num1 - num2;     // num2 = 5     (15 - 10)
    num1 = num1 - num2;     // num1 = 10    (15 - 5) 
    
    
    cout <<"\nAfter swapping: \n";
    cout<<"Value of 1st number: "<<num1<<endl;;
    cout<<"Value of 2nd number: "<<num2<<endl;
    
    return 0;
}