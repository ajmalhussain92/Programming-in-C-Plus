#include <iostream>
using namespace std;
//Largest number among three numbers
int main() {
    double num1, num2, num3;

    // Prompt the user for input
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    cout << "Third number: ";
    cin >> num3;

    double largest;

    // Determine the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Output the result
    cout << "The largest number is: " << largest << endl;

    return 0;
}
