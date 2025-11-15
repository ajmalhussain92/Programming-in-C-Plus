#include <iostream>
using namespace std;

// Observing Stack Growth

void func(int n) {
    int localVar = n;  // Stored in Stack
    cout << "Address of localVar in func(): " << &localVar << endl;
}

int main() {
    int mainVar = 10;  // Stored in Stack
    cout << "Address of mainVar in main(): " << &mainVar << endl;

    func(20);  // Call function and create new stack frame
    func(30);  // Call function again to compare stack growth

    return 0;
}
