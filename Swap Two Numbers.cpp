#include<iostream>
using namespace std;

//Swap two values using all methods

void mySwap(int a, int b);

int main(){
	
	int a,b;
	
	cout<<"Enter 1st: ";
	cin>>a;
	cout<<"Enter 2nd: ";
	cin>>b;
	
	cout<<"Before swapping, value 1st: "<<a <<endl;
	cout<<"Before swapping, value 2nd: "<<b <<endl<<endl;
	
	// no extra variable
	a=a+b;
	
	b=a-b;
	
	a=a-b;
	
	cout<<"After swapping, value 1st: "<<a <<endl;
	cout<<"After swapping, value 2nd: "<<b <<endl<<endl;
	
	// taking extra variable
	
	int c=a+b;
	
	b=c-b;
	
	a=c-b;
	
	cout<<"After swapping, value 1st: "<<a <<endl;
	cout<<"After swapping, value 2nd: "<<b <<endl<<endl;
	
	// using built-in function swap()
	
	swap(a,b);
	cout<<"After swapping, value 1st: "<<a <<endl;
	cout<<"After swapping, value 2nd: "<<b <<endl<<endl;
	
	// using user-defined function 
	
	mySwap(a,b);
		
	return 0;
}

void mySwap(int a, int b){
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"After swapping, value 1st: "<<a <<endl;
	cout<<"After swapping, value 2nd: "<<b <<endl<<endl;
}