#include <iostream>
using namespace std;
//Nested Class example2

class Outer{
    private:
    int outerValue1;
    
    protected:
    int outerValue2;
    
    public:
    Outer(int val1, int val2): outerValue1(val1), outerValue2(val2) {}
    
    public:
    class Inner{
        public:
        void display(Outer* e){		//Accessing private and protected value through pointer of Outer class
            
            cout<<"Outer class private value: "<< e-> outerValue1 <<endl;
            cout<<"Outer class protected value: "<< e-> outerValue2 <<endl;
        }
    };
};

int main() {
    
    Outer* outer1 = new Outer(10, 30);
    
    Outer* outer2 = new Outer(20, 50);
    
    Outer::Inner inner;
    
    inner.display(outer2);
    
    delete outer1;
    delete outer2;
    
    return 0;
}
