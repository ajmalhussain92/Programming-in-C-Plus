#include<iostream>
using namespace std;
//Friend Function example1

class A{
private:
    int a = 10;
protected:
    int b = 30;

friend void fun(A r);
friend void sum(A r);
};

void fun(A r){
    cout<<"Value of private variable x = "<<r.a <<endl;
    cout<<"Value of protected variable y = "<<r.b <<endl;
   
}

void sum(A r){
    cout<<"Sum of a and b = (a + b) = "<<r.a + r.b;
}

int main(){
    A a1;
    fun(a1);
    sum(a1);
    
    return 0;
}