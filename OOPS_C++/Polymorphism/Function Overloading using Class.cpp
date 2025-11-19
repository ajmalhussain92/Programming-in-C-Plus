#include <iostream>
using namespace std;
//Function Overloading using Class

class Base {
	public:
	
	// Example 1: Different number of parameters
	void add(int a, int b) {
    	cout << "Sum = " << a + b << endl;
	}

	void add(int a, int b, int c) {
    	cout << "Sum = " << a + b + c << endl;
	}
	
	// Example 2: Different types of parameters
	void display(int a) {
	    cout << "Integer: " << a << endl;
	}
	
	void display(double a) {
	    cout << "Double: " << a << endl;
	}
	
	// Example 3: Different types of parameters
	void test(int a, char b) {
	    cout << "int-char function: " << a << b << endl;
	}
	
	void test(char a, int b) {
	    cout << "char-int function: " << a << b << endl;
	}

};

int main(){
    
   Base b1;		// Object 'b1' created from class 'Base'
   
   
   
   b1.add (2, 5);		// calls 2-parameter function
   b1.add(2, 5, 9);		// calls 3-parameter function
   
   b1.display(35);		// calls int-parameter function
   b1.display(35.78);	// calls double-parameter function
   
   b1.test (90, 'A');	// calls 1st test function
   b1.test (50, 'C');	// calls 2nd test function
   
   return 0;
}