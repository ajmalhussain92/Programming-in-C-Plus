#include <iostream>
using namespace std;
//Final Class example

class FinalClass final {
public:
    void display() {
        cout << "This is a final class." << endl;
    }
};

// class NewClass : public FinalClass {}; // Error: Cannot inherit from final class


int main(){
    
    
    return 0;
}