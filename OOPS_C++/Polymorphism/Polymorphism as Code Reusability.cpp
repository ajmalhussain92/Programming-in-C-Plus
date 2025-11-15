#include<iostream>
using namespace std;
//Polymorphism as Code Reusability

class Shape {
public:
    virtual void draw() {								// virtual is compulsory
        cout << "Drawing shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing rectangle." << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1 -> draw();  // Calls Circle's draw()
    shape2 -> draw();  // Calls Rectangle's draw()

    delete shape1;
    delete shape2;
    return 0;
}
