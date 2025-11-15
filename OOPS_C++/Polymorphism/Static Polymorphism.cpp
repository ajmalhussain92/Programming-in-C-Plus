#include<iostream>
using namespace std;
// Static Polymorphism

class Print {
public:
    void display(int i) {
        std::cout << "Integer: " << i << std::endl;
    }
    
    void display(double d) {
        std::cout << "Double: " << d << std::endl;
    }
    
    void display(string s) {
        std::cout << "String: " << s << std::endl;
    }
};

int main() {
    Print p;
    p.display(5);             // Calls display(int)
    p.display(3.14);          // Calls display(double)
    p.display("Hello");       // Calls display(const std::string&)
    return 0;
}
