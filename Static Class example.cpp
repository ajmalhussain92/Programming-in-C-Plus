#include <iostream>
using namespace std;
//Static Class example

class Utility {
public:
    static void printMessage() {
        cout << "This is a static method!" << endl;
    }
};

int main(){
    
Utility utl;
utl.printMessage();
    
    return 0;
}