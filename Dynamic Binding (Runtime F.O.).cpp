#include <iostream>
using namespace std;
//Dynamic Binding or Late Binding or  Runtime Function Overriding

class Base{
    public:
    virtual void fun(){
        cout<<"Dalius.\n";
    }
};

class Child : public Base{
    public:
    void fun()override{
        cout<<"Xavier.\n";
    }
};

int main(){
    Base* basePtr;
    
    Child childObj;
    basePtr = &childObj;
    basePtr -> fun();
    return 0;
}