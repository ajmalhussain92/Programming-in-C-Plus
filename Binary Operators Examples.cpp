#include <iostream>
using namespace std;
//Examples of Binary Operators

int main() {
    int a = 5, b = 3;
    int sum = a + b;   // Binary addition: adds a and b
    int diff = a - b;  // Binary subtraction: subtracts b from a
    bool isEqual = (a == b);  // Binary equality check

    cout << "Sum = " << sum << endl;  // Output: Sum = 8
    cout << "Difference = " << diff << endl;  // Output: Difference = 2
    cout << "Is Equal = " << isEqual << endl;  // Output: Is Equal = 0 (false)
    return 0;
}
