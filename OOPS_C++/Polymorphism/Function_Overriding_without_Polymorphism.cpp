#include <iostream>
using namespace std;
// Function_Overriding_without_Polymorphism

class Animal { 
	public:
		void sound () {	
			cout << "Animal makes sound." << endl;
		} 
};

class Dog : public Animal { 
	public:
		void sound () {				
			cout << "Dog barks." << endl;
		} 
};

int main () {
	
	Animal animal;
	animal.sound();
	
	Dog dog;
	dog.sound();
	
	
	// 1. Scope resolution
	dog.Animal :: sound();		// Calling Parent class method through Child object
	
	
	// 2. Parent class pointer
	Animal* ptr;
	ptr = &dog;
	ptr -> sound();				// Calling Parent class method through Parent pointer
	
	
	return 0;
}

/*

Calling parent class method through child object using:

	1) Scope resolution operator
	
	2) Parent class pointer

*/