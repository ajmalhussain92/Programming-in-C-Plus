#include <iostream>
using namespace std;
//Function to print Fibonacci Numbers

void printFibonacci(int n) {
    int first = 0, second = 1, next;
    cout << "Fibonacci Sequence: " << first << ", " << second;

    for (int i = 2; i < n; ++i) {
        next = first + second;
        cout << ", " << next;
        
        first = second, second = next;
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    
    if (n <= 0) {
    	
        cout << "Please enter a positive number." << endl;
    } else if (n == 1) {
    	
        cout << "Fibonacci Sequence: 0" << endl;
    } else {
    	
        printFibonacci(n);
    }
    return 0;
}
