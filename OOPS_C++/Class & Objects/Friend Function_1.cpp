#include <iostream>
using namespace std;

// Friend function_1

class myClass {
	
	// Friend function declaration		(inside the class)
	friend void greet ();
};

// Friend function definition			(outside the class)
void greet () {
	cout << "Good Morning! " << endl;
}

int main () {
	
	greet ();			// call normally
}

/*

Friend functions must be defined outside the class, because:
	i) Friend functions are not members of the class, so they cannot be called using an object.
	ii) They only get permission to access private/protected members.

*/