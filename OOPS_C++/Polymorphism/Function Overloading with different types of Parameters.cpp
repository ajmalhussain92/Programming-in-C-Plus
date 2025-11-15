#include <iostream>
using namespace std;
//Function Overloading with different data types and parameters

class Base{
    public:
    void fun(int age){
       cout<<"Age: "<<age<<endl;
    }
    void fun(string name){
       cout<<"Name: "<<name<<endl;
    }
    void fun(double cgpa){
       cout<<"Cgpa: "<<cgpa<<endl;
    }
};

int main(){
    
   Base b1;
   b1.fun(32);
   b1.fun("Hussain");
   b1.fun(7.98);
   
return 0;
}