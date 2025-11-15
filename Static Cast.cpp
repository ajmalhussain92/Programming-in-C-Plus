#include <iostream>
#include<typeinfo>
using namespace std;
//Static Cast

class Base {};
class Derived : public Base {};

enum Color { RED, GREEN, BLUE };

int main() {
	
    int age = 65;
    char age_cast = static_cast<char>(age);     //int to char
    
    double age_double = static_cast<double>(age);   //int to double
    
    
    double num = 5.78;
    int num_cast = static_cast<int>(num);      //truncated
    
    char ch ='Z';
    int ch_cast = static_cast<int>(ch);         // Z to ascii value
    
    float pi = 3.14f;
    int rounded = static_cast<int>(pi);         // Explicit truncation
    
    
    bool b1 = true; 
    int b1_cast = static_cast<int>(b1);
    

    cout << "Original (double): " << num << "\n";
    cout << "Static Cast (int): " << num_cast << "\n\n";
    
    cout << "Original (int): " << age << "\n";
    cout << "Static Cast (char): " << age_cast << "\n\n";
    
    cout << "Original (int): " << age << "\n";
    cout << "Static Cast (double): " << age_double << "\n\n";
    
    cout << "Original (char): " << ch << "\n";
    cout << "Static Cast (int): " << ch_cast << "\n\n";
    
    cout << "Original (bool): " << b1 << "\n";
    cout << "Static Cast (int): " << b1_cast << "\n\n";
    
    cout << "Original (float): " << pi << "\n";
    cout << "Static Cast (int): " << rounded << "\n\n";

     
     
    //Pointer Conversions 
    Derived derivedObj;
    Base* basePtr = static_cast<Base*>(&derivedObj);  // Derived to Base
    Derived* derivedPtr = static_cast<Derived*>(basePtr);  // Base to Derived
    
    Color color = GREEN;
    int colorCode = static_cast<int>(color);  // Enum to int
    cout << "Color code: " << colorCode << endl;
    
    
    
    
    
    
    
    return 0;
}

//cout<<typeid(truncated).name();