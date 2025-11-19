#include <iostream>
using namespace std;

// Unary operator overloading using Class function
class Demo {
	private:
	    int a;
	    int b;
    
	public:
    
	    //Default constructor
	    Demo () : a(0), b(0) {}
	    
	    //Parameterized constructor
	    Demo (int x, int y) : a(x), b(y) {}
	    
	    // Overload '-' Operator
	    void operator - () {
	        a = -a;						// Changes the sign
	        b = -b;
	    }
	    
	    void display() {
	        cout << "A : " << a << "\t B : " << b << endl;
	    }
};

int main() {
    Demo d1(-8, 7), res;
    
    // Before
    d1.display();
    
    -d1;			// '-' sign inserted
    
    // After
    d1.display();
    
    return 0;
}