#include <iostream>
using namespace std;
//Constructor Definition Outside the Class

class myClass{
    public:
    int a;
    int b;
    myClass() : a(0), b(0){}
    
    myClass(int x, int y);		//Constructor Prototype
    
};

myClass :: myClass(int x, int y){		//Constructor Definition
    a = x;
    b = y;
}


int main(){
   
return 0;
}