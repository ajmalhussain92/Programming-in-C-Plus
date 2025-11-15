#include <iostream>
using namespace std;
//Nested Class example1

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
        void display(Outer& obj){		//Accessing private and protected value through object of Outer class
            
            cout<<"Outer class private value: "<< obj.outerValue1 <<endl;
            cout<<"Outer class protected value: "<< obj.outerValue2 <<endl;
        }
        
    };
    
};

int main(){
    
    Outer outer1(10, 30);
    
    Outer outer2(30, 70);
    
    
    Outer::Inner inner;
    
    inner.display(outer2);
    

    return 0;
}