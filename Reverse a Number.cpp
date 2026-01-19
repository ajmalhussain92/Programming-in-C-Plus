#include <iostream>
using namespace std;

// Reverse a Number

int main () {
    int num = 1234;
    
    int revNum = 0;
    
    while (num != 0) { 
    	revNum = revNum * 10 + num % 10;
    	num /= 10;
	}
    
    cout << "Revered number: " << revNum << endl;
    
    return 0;
}