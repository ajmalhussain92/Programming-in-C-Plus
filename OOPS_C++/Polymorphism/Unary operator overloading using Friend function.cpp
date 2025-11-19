#include <iostream>
using namespace std;
// Unary operator overloading using Friend function

class Demo {
	private:
	    int a;
	    int b;
    
	public:
    
	    //Parameterized constructor
	    Demo (int x, int y) : a(x), b(y) {}
	   
	    friend void operator - (Demo &obj);
	    
	    void display() {
	        cout << "A : " << a << "\t B : " << b << endl;
	    }
};

void operator - (Demo &obj) {
        obj.a = -obj.a;
        obj.b = -obj.b;
}

int main() {
    Demo d1(-10, 70);
    
    // Before
    d1.display();
    
    -d1;
    
    // After
    d1.display();
    
    return 0;
}