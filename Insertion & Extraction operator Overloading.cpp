#include <iostream>
using namespace std;
//<< & >> operator Overloading

class Complex {
private:
    float real;
    float imag;
    
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overloading << operator for output
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }

    // Overloading >> operator for input
    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }
};

int main() {
    Complex c1;
    
    // Overloading >> for input
    cin >> c1;
    
    // Overloading << for output
    cout << "Complex number is: " << c1 << endl;

    return 0;
}
