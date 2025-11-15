#include <iostream>
using namespace std;
//Prime number check

int main() {
    int number;
    bool isPrime = true;
	
    cout << "Enter a positive integer: ";
    cin >> number;

    // Edge cases: Numbers less than 2 are not prime
    if (number < 2) {
    	
        isPrime = false;
        
    } else {
    	
        for (int i = 2; i * i <= number; ++i) {		// i*i <= n is only for lower the iteration
        	
            if (number % i == 0) {
            	
                isPrime = false;
                break;
            }
        }
    }
    
    isPrime? cout <<"Prime" : cout <<"Not Prime";
    
    return 0;
}
