#include<iostream>
using namespace std;
//Recursion_1

void print4(int n){
    cout<<n<<"\n";
}

void print3(int n){
    cout<<n<<"\n";
    print4(n=5);
}

void print2(int n){
    cout<<n<<"\n";
    print3(n=4);
}

void print1(int n){
    cout<<n<<"\n";
    print2(n=3);
}

void print(int n){
    cout<<n<<"\n";
    print1(n=2);
}

int main(){
   
   print(1);
   
    return 0;
}