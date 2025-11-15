#include<iostream>
using namespace std;
//Function Overloading

class Rectangle{
    public:
    float legth, width;
    
    Rectangle(): legth(0), width(0){}
    
    void input(float side){
        legth = side;
        width = side;
        cout<<"Area of Square = "<<legth * width<<endl;
    }
    
    void input(float l, float w){
        legth = l;
        width = w;
        cout<<"Area of Rectangle = "<<legth * width<<endl;
    }
    
};

int main(){
   
   Rectangle r;
   
   
   r.input(10, 5);
   
    return 0;
}