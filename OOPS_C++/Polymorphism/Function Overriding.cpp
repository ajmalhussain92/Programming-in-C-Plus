#include<iostream>
using namespace std;
// Function Overriding: Redefining a base class function in a derived class using the same function name, same return type, and same parameters.

class Animal {
    
    public:
    // Overridden function
    virtual void sound () {
        cout << "Animal makes sound." << endl;
    }
};

class Cat : public Animal {
    
    public:
    // Overriding the sound function
    void sound () override {			// overriding
        cout << "Cat meows." << endl;
    }
};


int main() {
	
    Animal* animalPtr;			// Pointer of Parent class
    
    Cat cat;					// Object of Child class
    animalPtr = &cat;			// base class pointer ? child object
    animalPtr -> sound();		// calls Cat's sound() due to overriding
    
    cat.Animal :: sound(); 		// This bypasses the overridden function and calls Animal's sound()
    
    
    return 0;
}

/*
Requirements for Function Overriding

-> There must be inheritance (base ? derived).

-> Function name must be same.

-> Parameters must be same.

-> Return type must be same.

-> Use of virtual keyword in base class is recommended.

*/