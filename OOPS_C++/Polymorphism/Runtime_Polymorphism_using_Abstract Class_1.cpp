#include <iostream>
using namespace std;
// Runtime_Polymorphism_using_Abstract Class_1

class Shape {
	public:
	
	    virtual double getArea() = 0;					// Pure virtual function
	
	    virtual void display() {						// virtual function
	        cout << "This is a shape." << endl;
	    }
	
	    virtual ~Shape() {}								// Virtual destructor
};


class Rectangle : public Shape {
	private:
	    double length;
	    double width;

	public:
	    Rectangle(double l, double w) : length(l), width(w) {}
	
	    // Implementing the pure virtual function
	    double getArea() override {
	        return length * width;
	    }
	
	    void display() override {
	        cout << "Rectangle with length " << length << " and width " << width << endl;
	    }
};

class Circle : public Shape {
	private:
	    double radius;
	
	public:
	    Circle(double r) : radius(r) {}
	
	    // Implementing the pure virtual function
	    double getArea() override {
	        return 3.14159 * radius * radius;
	    }
	
	    void display() override {
	        cout << "Circle with radius " << radius << endl;
	    }
};

int main() {
    // Shape shape; // Error: Cannot instantiate abstract class

    Shape* rect = new Rectangle(5.0, 3.0);
    Shape* circ = new Circle(4.0);

    rect -> display();
    cout << "Area: " << rect -> getArea() << endl;

    circ -> display();
    cout << "Area: " << circ -> getArea() << endl;

    delete rect;
    delete circ;

    return 0;
}
