#include <iostream>
//Abstract Classes Enable Function Overriding
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
    virtual void move() = 0;   // Another pure virtual function

    virtual ~Animal() {}  // Virtual destructor
};

class Dog : public Animal {
public:
    void sound() override {
        std::cout << "Bark" << std::endl;
    }

    void move() override {
        std::cout << "Run on four legs" << std::endl;
    }
};

class Bird : public Animal {
public:
    void sound() override {
        std::cout << "Chirp" << std::endl;
    }

    void move() override {
        std::cout << "Fly" << std::endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Bird();

    a1->sound();  // Calls Dog's sound()
    a1->move();   // Calls Dog's move()

    a2->sound();  // Calls Bird's sound()
    a2->move();   // Calls Bird's move()

    delete a1;
    delete a2;

    return 0;
}
