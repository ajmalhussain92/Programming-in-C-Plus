#include <iostream>
using namespace std;
//Hierarchical Inheritance

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks: Woof Woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows: Meow Meow!" << endl;
    }
};

// Derived class 3
class Bird : public Animal {
public:
    void chirp() {
        cout << "The bird chirps: Chirp Chirp!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    Bird bird;

    // All derived classes can use the base class method
    dog.eat();   // Output: This animal is eating.
    dog.bark();  // Output: The dog barks: Woof Woof!

    cat.eat();   // Output: This animal is eating.
    cat.meow();  // Output: The cat meows: Meow Meow!

    bird.eat();  // Output: This animal is eating.
    bird.chirp(); // Output: The bird chirps: Chirp Chirp!

    return 0;
}
