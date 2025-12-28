#include <iostream>
#include <limits>
using namespace std;

int main() {
    double number;

    cout << "Enter a number (int, float, or double): ";
    cin >> number;

    // Check if input failed (e.g., user entered a letter or string)
    if (cin.fail()) {
        goto InputError;
    }

    cout << "You entered: " << number << endl;
    return 0;
    

InputError:    
    cout << "Invalid input! Please enter a numeric value only." << endl;
    return 1;
}