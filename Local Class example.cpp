#include <iostream>
using namespace std;
//Local Class

void display() {
    // Local class defined inside the function
    class Local {
    public:
        void show() {
            cout << "This is a local class." << endl;
        }
    };

    Local obj; // Creating an object of the local class
    obj.show();
    obj.show();
    obj.show();
}

int main() {
    display();
    // Local obj; // Error: Local is not visible here
    return 0;
}
