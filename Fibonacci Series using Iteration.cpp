#include <iostream>
using namespace std;

// Fibonacci Series using Iteration

void fibonacci_iterative (int n) {
	
    int a = 0, b = 1, next;
    cout << "Fibonacci Series: " << a << ", " << b;
	
	// Starts generating Fibonacci from 3rd terms
	for (int i = 2; i < n; ++i) {
        next = a + b;
        cout << ", " << next;
        
        a = b, b = next;
	}
}

int main() {
	
    int n;
    cout << "Enter the nth terms: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive number.";
    } else if (n == 1) {
        cout << "Fibonacci Series: 0";
    } else {
        fibonacci_iterative (n);
    }
    
    return 0;
}
