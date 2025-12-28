#include <iostream>
using namespace std;

int main() {
    
    int n = 10;
    
    for (int i=0; i<n/2; i++){              // n/2
        for (int j=1; j<n; j = j*3){        // log3n
            cout << "Hello ";               // (n/2) * (log3n) = nlogn = O(nlogn)
        }
    }
    
    cout << "\nTime Complexity = O(nlogn)";
    return 0;
}