#include<iostream>
using namespace std;

// Subtracting two complex numbers using the overloaded '-' operator
class Complex{
    
    float real, imag;
    
    public:
    
    Complex() : real(0), imag(0){}
    
    Complex(float r, float i) : real(r), imag(i){}
    
    
    friend Complex operator-(Complex &c1, Complex &c2);
    
    void display(){
        if(imag < 0)
        cout<<real<<imag<<"i" <<endl;
        else
        cout<<real <<"+"<<imag<<"i" <<endl;
    }
};

Complex operator-(Complex &c1, Complex &c2){
    Complex temp;
    
    temp.real = c1.real - c2.real; 
    temp.imag = c1.imag - c2.imag;
    
    return temp;
}

int main(){
    
    Complex c1(10,-30), c2(30, 50), c3;
    

    cout << "First complex number: \t";
    c1.display();
    
    cout << "Second complex number: \t";
    c2.display();
    
    // Subtracting two complex numbers using the overloaded '-' operator
    c3 = c1 - c2;
    
    // Displaying the result of the subtraction
    cout << "Subtraction of the complex numbers: ";
    c3.display();

    return 0;
}