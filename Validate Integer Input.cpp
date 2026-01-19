#include <iostream>
#include <limits> 	// for numeric_limits
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    
//    while (true) {
//        if (cin >> number) {
//            // Successfully read an integer
//            break;
//        } else {
//            cin.clear();		// Reset input errors, clear error state
//            cin.ignore(numeric_limits<streamsize> :: max(), '\n');		// Ignore the rest of the line
//            cout << "Invalid input. Please enter a valid integer: ";
//        }
//    }
    
    while (!(cin >> number)) {		// Keep asking until the user enters a valid number
    	cin.clear();		// Reset input errors, clear error state
    	cin.ignore(numeric_limits<streamsize> :: max(), '\n');		// Ignore the rest of the line
    	cout << "Invalid input. Please enter a valid integer: ";
	}

    cout << "You entered: " << number << endl;
    return 0;
}