#include <iostream>
using namespace std;
//Friend Class Example1

class ClassA {
private:
    int privateData;

public:
    ClassA(int value) : privateData(value) {}
    
private:
	
    // Declare ClassB as a friend
    friend class ClassB;
    
};

class ClassB {
public:

    void display(ClassA& obj) {
        // Accessing private member of ClassA
        cout << "Private data of ClassA: " << obj.privateData << endl;

    }
};

int main() {
    ClassA objA(70);
    
    ClassB objB;

    objB.display(objA);

    return 0;
}
