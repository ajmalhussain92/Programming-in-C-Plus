#include <iostream>
using namespace std;

// Constructor Overloading

class Rectangle {
private:
    int length;
    int width;

public:
    // Default constructor (no arguments)
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Constructor with one argument (for square)
    Rectangle(int side) {
        length = side;
        width = side;
    }

    // Constructor with two arguments (for rectangle)
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Function to calculate the area of the rectangle
    int area() {
        return length * width;
    }

    // Function to display the dimensions
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1;               // Calls default constructor
    Rectangle rect2(5);            // Calls constructor with one argument (square)
    Rectangle rect3(4, 6);         // Calls constructor with two arguments (rectangle)

    cout << "Rectangle 1: ";
    rect1.display();
    cout << "Area: " << rect1.area() << endl << endl;

    cout << "Rectangle 2: ";
    rect2.display();
    cout << "Area: " << rect2.area() << endl << endl;

    cout << "Rectangle 3: ";
    rect3.display();
    cout << "Area: " << rect3.area() << endl;

    return 0;
}
