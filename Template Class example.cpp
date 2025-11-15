#include <iostream>
using namespace std;
//Template Class example

template <class T>
class myClass {
private:
    T a;
    T b;
public:
    void setValue(T x, T y) {
        a = x;
        b = y;
    }
    T getValue(){
        return a + b;
    }
};

int main() {

myClass <int> obj;
    
    obj.setValue(10, 20);
    int res = obj.getValue();
    
    cout<<"Sum is: "<<res;
    return 0;
}
