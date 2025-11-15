#include <iostream>
#include <string>
using namespace std;
// Concatenate the two strings

int main() {
    string str1, str2, concatenatedString;

    // Prompt user input
    cout << "Enter first string: ";
    getline(cin, str1); // Use getline to allow spaces in the input

    cout << "Enter second string: ";
    getline(cin, str2); // Use getline to allow spaces in the input

    // Concatenate the two strings
    concatenatedString = str1.append(str2);		// or str1 + str2;

    // Output the result
    cout << "Concatenated string: " << concatenatedString << endl;

    return 0;
}
