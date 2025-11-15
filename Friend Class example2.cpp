#include<iostream>
using namespace std;
//Friend Class example2

class A{
private:
    int a = 10;
protected:
    int b = 30;

friend class B;

};

class B{
public:
    void display(A& obj){
        cout<<"Value of private variable a = "<<obj.a <<endl;
        cout<<"Value of protected variable b = "<<obj.b <<endl;
    }
    void sum(A& obj){
        cout<<"Sum of a and b = (a + b) = "<<obj.a + obj.b;
    }
};

int main(){
    A a1;
    B b1;
    
    b1.display(a1);
    b1.sum(a1);
    
    return 0;
}