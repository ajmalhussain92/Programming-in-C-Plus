#include <iostream>
using namespace std;

int main() {
    int number, range;

    // Prompt the user for input
    cout << "Enter a number to generate its multiplication table: ";
    cin >> number;

    cout << "Enter the range (up to which number): ";
    cin >> range;

    // Generate and display the multiplication table
    cout << "Multiplication Table of " << number << ":\n";
    for (int i = 1; i <= range; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
