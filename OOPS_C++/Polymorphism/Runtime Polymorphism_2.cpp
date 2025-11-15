#include <iostream>
using namespace std;
// Runtime Polymorphism_2

class Animal {
	public:
		virtual void sound () {
			cout << "Animal makes sound." << endl;
		}
};

class Dog : public Animal {
	public:
		void sound () override {
			cout << "Dog barks." << endl;
		}
};

class Cat : public Animal {
	public:
		void sound () override {
			cout << "Cat meows." << endl;
		}
};

int main () {
	
	Animal* dog = new Dog();		// dog is a pointer of type Animal
	Animal* cat = new Cat();
	
	dog -> sound(); 
	cat -> sound(); 
	
	Dog d1;
	Animal* a1;
	a1 = &d1;
	
	a1 -> sound();
	
	
	delete dog;
	delete cat;
	
	return 0;
}

/*

Runtime Polymorphism is also called Dynamic Polymorphism in C++.

Runtime Polymorphism is achieved using:

	i)  The base class function must be marked as "virtual".

	ii) A base class pointer (or reference) must point to a derived class object.

	iii) Function calls are resolved at runtime, not compile time.

*/
