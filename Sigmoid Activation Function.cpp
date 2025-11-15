#include <iostream>
#include <cmath>
using namespace std;

// Sigmoid function
double sigmoid (double x) {
    return 1.0 / (1.0 + exp(-x));
}

int main() {
    double x;
    cout << "Enter a value: ";
    cin >> x;

    double result = sigmoid(x);
    cout << "Sigmoid(" << x << ") = " << result << endl;

    return 0;
}
