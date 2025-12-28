#include <iostream>
using namespace std;

int main() {
    cout << "Logarithmic Time Complexity\n";
    cout << "==================================\n\n";
    
    int n = 10;
    
    for (int i=1; i<n; i = i*2){			// The variable i doubles each time: 1, 2, 4, 8, 16 ...
        cout << "Hello ";
    }
    
    for (int i=n; i>=1; i = i/2){			// The variable i halves each time: 10, 5, 2, 1
        cout << "Hello ";
    }
    
    cout << "The time complexity = O(log n)"
    
    return 0;
}