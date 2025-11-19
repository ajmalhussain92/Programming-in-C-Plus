#include <iostream>
using namespace std;

// Friend Function_2

class myClass {
	private:
		double salary;
		
	public:
		myClass (double sal) : salary (sal) {}
	
	// Friend function
	friend void greet (myClass &obj, string name);
};

// Friend function definition
void greet (myClass &obj, string name) {
	cout << "Hello! " << name << "! Your salary is: " << obj.salary << endl;
}

int main () {
	
	myClass obj1 (55000);
	myClass obj2 (80000);
	
	greet (obj1, "Hussain");
	greet (obj2, "Gabriel");
}

/*

Friend functions must be defined outside the class, because:

	i) Friend functions are not members of the class, so they cannot be called using an object.
	ii) They only get permission to access private/protected members.

*/