#include<iostream>
using namespace std;
// Static Polymorphism

class Print {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }
    
    void display(double d) {
        cout << "Double: " << d << endl;
    }
    
    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
	
    Print p;
    p.display(5);             // Calls display(int)
    p.display(3.14);          // Calls display(double)
    p.display("Hello");       // Calls display(const std::string&)
    
    return 0;
}
