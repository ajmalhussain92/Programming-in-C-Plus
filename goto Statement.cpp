#include <iostream>
using namespace std;
// goto Statement

int main () {
	
    int n = -8;
    
    if (n <= 0) { 
        goto NegativeError;
    } else {
    	if (n % 2 == 0) 
            cout << "Even\n";
        else  
            cout << "Odd\n";
	}
    
NegativeError:
    cout << "Please input a positive number.\n";
}