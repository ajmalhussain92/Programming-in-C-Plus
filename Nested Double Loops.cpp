#include <iostream>
using namespace std;

int main() {
    cout << "Visualization of Nested Loops:\n";
    cout << "==============================\n\n";

    int n = 5;
    
    int outerCount = 0, innerCount = 0;

    for (int i=0; i<n; i++) { 
        cout << "Hello ";
        outerCount++;
        for (int j=0; j<n; j++) {
            cout << "Bye ";
            innerCount++;
        }  
        cout << "\n";
    }

    cout << "\nOuter count: " << outerCount;
    cout << "\nInner count: " << innerCount;
    
    cout << "\nThe time complexity of the nested loops = O(n^2)";

    return 0;
}