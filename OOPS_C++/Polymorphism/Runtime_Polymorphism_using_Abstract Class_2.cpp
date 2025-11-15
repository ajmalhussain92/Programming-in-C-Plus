#include <iostream>
#include <cmath>
using namespace std;
// Runtime_Polymorphism_using_Abstract Class2

class Shape {
	public:
	    virtual void draw() = 0;     // Pure virtual function
	    virtual double area() = 0;   // Pure virtual function
	    virtual ~Shape() {}          // Virtual destructor
};

class Circle : public Shape {
	private:
	    double radius;
	
	public:
	    Circle(double r) : radius(r) {}
	
	    void draw() override {
	        cout << "Drawing Circle" << endl;
	    }
	
	    double area() override {
	        return 3.14159 * radius * radius;
	    }
};

class Rectangle : public Shape {
	private:
	    double width, height;
	
	public:
	    Rectangle(double w, double h) : width(w), height(h) {}
	
	    void draw() override {
	        cout << "Drawing Rectangle" << endl;
	    }
	
	    double area() override {
	        return width * height;
	    }
};

int main() {
    Shape* s1 = new Circle(5.0);
    Shape* s2 = new Rectangle(4.0, 6.0);

    s1 -> draw();
    cout << "Area of Circle: " << s1 -> area() << endl;

    s2 -> draw();
    cout << "Area of Rectangle: " << s2 -> area() << endl;

    delete s1;
    delete s2;

    return 0;
}
