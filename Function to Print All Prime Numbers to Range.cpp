#include <iostream>
using namespace std;
//Function to Print All Prime Numbers to Range

int primeCheck(int n){
    
    bool isPrime = true;
    
    for(int i=2; i*i<=n; i++){
            
        if(n%i == 0){
                
            isPrime = false;
                
            return 0;
        }
    }
    return 1;
}

void printPrime(int range){
    
    cout <<"Prime numbers (between 1 and "<< range << "): ";
    
    for(int i=2; i<=range; i++){
        
        if(primeCheck(i) == 1){
            
            cout << i <<" ";
        }
    }
    
}

int main() {
    
    int range;
    
    cout << "Enter the range: ";
    cin >> range;
    
    if(range<=0){
        
        cout <<"Enter a psoitive range only";
    }else if(range==1){
        
        cout <<"Range must be greater than 1";
    }else{
        
        printPrime(range);
    }
    
    
    
    return 0;
}
