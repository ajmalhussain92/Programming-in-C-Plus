#include<iostream>
using namespace std;
//Swap two numbers using nested if-else


int main(){
    double num1, num2, num3, largest;
    
    cout<<"Enter first number: ";
    cin>>num1;
    
    cout<<"Enter second number: ";
    cin>>num2;
    
    cout<<"Enter third number: ";
    cin>>num3;
    
    if(num1 > num2){
        
        if(num1 > num3){
            
            largest = num1;
            
        }else{
            
            largest = num3;
        }
    }else{
        
        if(num2 > num3){
            
            largest = num2;
        }else{
            
            largest = num3;
        }
    }
    
    cout<<"Largest number is : "<<largest;
    
    return 0;
}