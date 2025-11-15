#include <iostream>
#include<typeinfo>
using namespace std;
//Dynamic Cast

class Base {
public:
    virtual void display() { cout << "Base class" << endl; }
};

class Derived : public Base {
public:
    void display() override { cout << "Derived class" << endl; }
};

class Sibling1 : public Base {};
class Sibling2 : public Base {};

int main() {
    
    Base* basePtr = new Derived();  // Base pointer pointing to Derived
    
    // Downcasting
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);

    if (derivedPtr) {  				// Check if the cast succeeded
        derivedPtr->display();
    } else {
        cout << "Invalid cast!" << endl;
    }
    
    
    basePtr = new Sibling1();
    
    // Cross-Casting
	Sibling2* siblingPtr = dynamic_cast<Sibling2*>(basePtr);  // Returns nullptr
    Derived* dPtr = dynamic_cast<Derived*>(basePtr);
    
	if (dPtr == nullptr) {
    	cout << "Invalid cast" << endl;
	}
    
    try {
    	Derived& dRef = dynamic_cast<Derived&>(*basePtr);
    	dRef.display();
    } catch (const std::bad_cast& e) {
    	cout << "Invalid cast: " << e.what() << endl;
	}
    
    
    delete basePtr;
    
    return 0;
}




//cout<<typeid(truncated).name();