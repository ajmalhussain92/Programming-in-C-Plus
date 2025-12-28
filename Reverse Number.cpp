#include <iostream>
#include <cmath>
using namespace std;

// Reverse number

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int rem = 0;
    int newNum = 0;
    
    while (num != 0) { 
    	rem = num % 10;
    	num = num / 10;
    	newNum = newNum * 10 + rem;
	}
    
    cout << "Revered number: " << newNum << endl;
    
    return 0;
}