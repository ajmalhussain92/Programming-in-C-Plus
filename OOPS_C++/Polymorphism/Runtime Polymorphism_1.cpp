#include <iostream>
using namespace std;
// Runtime Polymorphism_1

class Animal {
	public:
		virtual void sound () {			// i) virtual method
			cout << "Animal makes sound." << endl;
		}
};

class Dog : public Animal {
	public:
		void sound () override {				
			cout << "Dog barks." << endl;
		}
};


int main () {
	
	Animal* dog = new Dog();				// ii) parent pointer -> child object
	
	dog -> sound();							// iii) resolved at runtime
	
	delete dog;
	
	
	return 0;
}

/*

Runtime Polymorphism is achieved using:

	i)  The base class function must be marked as "virtual".

	ii) A parent class pointer (or reference) must point to a child class object.

	iii) Function calls are resolved at runtime, not compile time.

---------------------------------------------------------------------------------------

"override" is optional in C++, but it's highly recommended.
Explicitly tells the compiler:
“This function is intended to override a base class virtual function.”

*/