#include<iostream>
using namespace std;
//Function Overriding

class Animal{
    
    public:
    // Overridden function
    virtual void sound(){
        cout<<"Animal makes sound."<<endl;
    }
};

class Dog : public Animal{
    
    public:
    // Overriding the sound function
    void sound()override {
        cout<<"Dog barks."<<endl;
    }
};

class Cat : public Animal{
    
    public:
    // Overriding the sound function
    void sound()override{
        cout<<"Cat meows."<<endl;
    }
};

int main(){
    Animal* animalPtr;			// 
    
    Dog dog;
    animalPtr = &dog;
    animalPtr -> sound();
    
    Cat cat;
    animalPtr = &cat;
    animalPtr -> sound();
    
    cat.Animal::sound();
    
    dog.Animal::sound();
    
    return 0;
}