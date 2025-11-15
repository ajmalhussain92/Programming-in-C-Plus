#include <iostream>
#include <cmath>
using namespace std;

// Tanh function
double tanh (double x) {
    return (exp(x) - exp(-x)) / (exp(x) + exp(-x));
}

int main() {
    double x;
    cout << "Enter a value: ";
    cin >> x;

    double result = tanh (x);
    cout << "Tanh (" << x << ") = " << result << endl;

    return 0;
}