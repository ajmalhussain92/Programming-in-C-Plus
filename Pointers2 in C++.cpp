#include<iostream>
using namespace std;


int main(){
	int a = 7;
	int* xPtr = &a;
	cout<<"Value of x: "<< a <<endl;     // 7
	cout<<"Memory Address of a: "<< &a <<endl;        //output:  0x78fe14
	cout<<"Memory Address of xPtr: "<< xPtr <<endl;   //output:  0x78fe14
	cout<<"Value of xPtr: "<< *xPtr <<endl;           //output:  7
	
	int b = 7;
	int* yPtr = new int;  // y is to be given value during runtime (dynamically)
	*yPtr = b;
	cout<<"Value of b: "<< b <<endl;    // 7
	cout<<"Memory Address of b: "<< &b <<endl;        //output:  0x78df05
	cout<<"Memory Address of yPtr: "<< yPtr <<endl;   //output:  0x78fe78
	cout<<"Value of yPtr: "<< *yPtr <<endl;           //output:  7
	
return 0;
}