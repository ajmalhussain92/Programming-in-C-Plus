#include <iostream>
using namespace std;
// Function Overloading


// Example 1: Different number of parameters
void add (int a, int b) {
    cout << "Sum = " << a + b << endl;
}

void add (int a, int b, int c) {
    cout << "Sum = " << a + b + c << endl;
}
	
// Example 2: Different types of parameters
void display (int a) {
	cout << "Integer: " << a << endl;
}
	
	void display (double a) {
	    cout << "Double: " << a << endl;
	}
	
// Example 3: Different types of parameters
void test (int a, char b) {
	cout << "int-char function: " << a << b << endl;
}
	
void test (char a, int b) {
	cout << "char-int function: " << a << b << endl;
}


int main(){
   
   add (2, 5);			// calls 2-parameter function
   add (2, 5, 9);		// calls 3-parameter function
   
   display (35);		// calls int-parameter function
   display (35.78);		// calls double-parameter function
   
   test (90, 'A');		// calls int-char parameter function
   test ('C', 50);		// calls char-int parameter function
   
   return 0;
}