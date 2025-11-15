#include <iostream>
using namespace std;
// Function Definition Outside the Class

class myClass{
    public:
    
    void fun();     //Function Prototype
    
};

void myClass :: fun(){      //Function Definition
    cout<<"hello G!\n";
}


int main(){
    
   myClass b1;
   b1.fun();
   
return 0;
}