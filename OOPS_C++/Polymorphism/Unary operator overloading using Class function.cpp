#include <iostream>
using namespace std;

// Unary operator overloading using Class function
class Demo{
    int a;
    int b;
    
public:
    
    //default constructor
    Demo () : a(0), b(0){}
    
    //parameterized constructor
    Demo (int x, int y) : a(x), b(y){}
    
    void operator-(){
        a = -a;
        b = -b;
    }
    
    void display(){
        
        cout<<"A : "<<a<<"\t B : "<<b<<endl;
        
    }
    
};

int main(){
    Demo d1(-8,7),res;
    
    // Before
    d1.display();
    
    -d1;
    
    // Agter
    d1.display();
    
    return 0;
}