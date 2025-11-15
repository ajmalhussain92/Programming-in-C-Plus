#include<iostream>
using namespace std;
//Complex Number Subtraction

class Complex{
    public:
    float real, imag;
    
    Complex(): real(0), imag(0){}
    
    // Complex(float r, float i): real(r), imag(i){}    Don't need anymore
    
    Complex operator - (Complex c){
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
    
    void input(){
        cout<< "Real part: ";
        cin>>real;
        cout<< "Imaginary part: ";
        cin>>imag;
    }
    
    void display(){
        if(imag > 0){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }else{
            cout<<real<<imag<<"i"<<endl;
        }
    }
};

int main(){
    
    Complex c1, c2, c3;
    
    cout<<"First complex number:\n";
    c1.input();
    
    cout<<"Second complex number:\n";
    c2.input();
    
    c3 = c1 - c2;
    cout<<"Resulted complex number: ";
    c3.display();
    
    return 0;
}