#include <iostream>
using namespace std;
//C-style & C++ functional cast

int main() {
    double num = 5.75;
    int truncated = (int)num;         // C-style cast
    int truncated2 = int(num);       // C++ functional cast

    cout << "Original: " << num << endl;
    cout << "C-style Cast: " << truncated << endl;
    cout << "C++ Functional Cast: " << truncated2 << endl;

    return 0;
}
