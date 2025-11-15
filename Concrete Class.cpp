#include <iostream>
using namespace std;
//Concrete Class

class Rectangle {
private:
	//Data members
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    //Member functions
    double getArea() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    // Creating an object of the concrete class
    Rectangle rect(5.0, 3.0);

    // Using the object
    rect.display();
    cout << "Area: " << rect.getArea() << endl;

    return 0;
}
