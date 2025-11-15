#include <iostream>
#include<typeinfo>
using namespace std;
// Function to Prime Number Check

void primeCheck(int num){
    
    bool isPrime = true;
        
    for(int i=2; i*i<=num; i++){
            
        if(num%i == 0){
                
            isPrime = false;
            break;
        }
    }
        
    isPrime? cout << "Prime" : cout << "Not Prime";                 //Ternary operator
}

int main() {
    
    int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    if(num <= 0){
        
        cout << "Enter a positive integer only";
        
    }else if(num == 1){
        
        cout << "1 is neither prime nor composite";
    
    }else{
        
        primeCheck(num);
    
    }
    
    return 0;
}