#include<iostream>
using namespace std;

// Global Variable

int a = 100;

int main(){

int a = 10;

cout << a;          // local variable					( by default access )

cout << :: a;		// global variable access using scope resolution operator 

	return 0;
}