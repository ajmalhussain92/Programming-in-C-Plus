#include <iostream>
using namespace std;

int main() {
    
    cout << "Visualization of Nested Loops:\n";
    cout << "==============================\n\n";
    
    int n = 3;
    int outerCount = 0, middleCount = 0, innerCount = 0;
    
    for (int i=0; i<n; i++) { 
        cout << "Hello ";
        outerCount++;
        for (int j=0; j<n; j++) {
            cout << "Bye ";
            middleCount++;
            for (int k=0; k<n; k++){
                cout << "World ";
                innerCount++;
            }
        }  
        cout << "\n";
    } 
    
    cout << "\nOuter count: " << outerCount;
    cout << "\nMiddle count: " << middleCount;
    cout << "\nInner count: " << innerCount;
    
    cout << "\nThe time complexity of the nested tripple loops = O(n^3)";
    
    return 0;
}