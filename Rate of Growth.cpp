#include <iostream>
#include <cmath>
using namespace std;

void Linear_Equation1 () {
    cout << "Linear Equation 1: " << endl;
    cout << "Form: y = 3x + 5" << endl;
    cout << "Equation: y = 3x + 5" << endl;
    int x;
    cout << "Enter x: ";
    cin >> x;
    
    int y;
    
    y = 3 * x + 5;
    
    cout << "y = " << y << endl;
}

void Linear_Equation2 () {
    cout << "Linear Equation 2: " << endl;
    cout << "Form: ax + by + c" << endl;
    cout << "Equation: 3x + 5y + 15" << endl;
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    
    int res;
    
    res = 3 * x + 5 * y + 15;
    
    cout << "Res = " << res << endl;
}

void Quadratic_Equation () {
    cout << "Quadratic Equation: " << endl;
    cout << "Form: ax^2 + bx + c" << endl;
    cout << "Equation: 3x^2 + 5x + 15" << endl;
    int x;
    cout << "Enter x: ";
    cin >> x;
    
    int res;
    
    res = (3 * pow(x, 2)) + (5 * x) + 15;
    
    cout << "Res = " << res << endl;
}

void Cubic_Equation () {
    cout << "Cubic Equation: " << endl;
    cout << "Form: ax^3 + bx^2 + cx + d" << endl;
    cout << "Equation: 3x^3 + 5x^2 + 15x + 20" << endl;
    int x;
    cout << "Enter x: ";
    cin >> x;
    
    int res;
    
    res = (3 * pow(x, 3)) + (5 * pow(x, 2)) + (15 * x) + 20;
    
    cout << "Res = " << res << endl;
}

void Biquadratic_Equation () {
    cout << "Bi-quadratic Equation: " << endl;
    cout << "Form: ax^4 + bx^3 + cx^2 + dx + e" << endl;
    cout << "Equation: 3x^4 + 5x^3 + 15x^2 + 20x + 25" << endl;
    int x;
    cout << "Enter x: ";
    cin >> x;
    
    int res;
    
    res = (3 * pow(x, 4)) + (5 * pow(x, 3)) + (15 * pow(x, 2)) + (20 * x) + 25;
    
    cout << "Res = " << res << endl;
}

int main(){
    
    // Linear Equation
    // y = mx + c; ax + by +c = 0;
    
    // Quadratic Equation
    // ax^2 + bx + c
    
    // Cubic Equation
    // ax^3 + bx^2 + cx + d
    
    // Bi-quadratic Equation
    // ax^4 + bx^3 + cx^2 + dx + e
    
    // Log Equation
    // alogx + b
    
    // Exponential Equation
    // e^x + 2^3 + 3^x
    
    Linear_Equation1();
    Linear_Equation2();
    
    Quadratic_Equation();
    Cubic_Equation();
    
    
    return 0;
}