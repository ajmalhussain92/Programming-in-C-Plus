#include<iostream>
#include<cmath>
using namespace std;

// Calculate Power of a Number using predefined Power Function
int main(){
	
	int base,exponent;
	
	cout<<"Enter Base: ";	
	cin>>base;
	cout<<"Enter Exponent: ";	
	cin>>exponent;
	
	int res = pow(base,exponent);
	
	cout<<"Result: "<<res;	
	
	return 0;
}