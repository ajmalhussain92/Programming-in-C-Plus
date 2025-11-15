#include <iostream>
using namespace std;
//Examples of Unary Operators

int main() {
    int a = 5;
    int b = -a;  // Unary minus: negates the value of a
    int c = ++a; // Unary increment: increases the value of a by 1
    bool d = !true;  // Unary NOT: inverts the boolean value

    cout << "b = " << b << endl;  // Output: b = -5
    cout << "c = " << c << endl;  // Output: c = 6
    cout << "d = " << d << endl;  // Output: d = 0 (false)
    return 0;
}
