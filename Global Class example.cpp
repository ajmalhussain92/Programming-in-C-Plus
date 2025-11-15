#include <iostream>
using namespace std;
//Global Class example

class GlobalClass {
public:
    void display() {
        std::cout << "This is a global class." << std::endl;
    }
};

// Declaring a global object
GlobalClass globalObj;

int main() {
    globalObj.display();  // Accessible globally
    
    
    return 0;
}
