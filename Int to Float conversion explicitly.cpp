#include<iostream>
using namespace std;



int main(){
//	Explicit Conversion of int to float:
//	When converting an int to a float, the integer value is converted to a floating-point number.
//	The fractional part will simply be .0, because an integer doesn't have a fractional component.
//	2 ways: 
	int i1 = 5;
	int i2 = 7;
	
	float f1 = (float) i1;                 // int i1 converted into float f1
	
	float f2 = static_cast<float>(i2);     // int i2 converted into float f2
	
	cout << "f1: ";
	cin >> f1;
	cout << "f2: ";
	cin >> f2;
	cout << f1 <<endl;
	cout << f2 <<endl;
	
	
//	Explicit Conversion of float to int:
//	When converting a float to an int, the fractional part is truncated (not rounded),
//	meaning the decimal portion is discarded, and only the integer part remains.
//	2 ways:
	float f3 = 5.75;
	float f4 = 9.12;
	int i3 = (int) f3;                    // float f3 converted into int i3
	int i4 = static_cast <int>(f4);       // float f4 converted into int i4
	
	cout << "i3: ";
	cin >> i3;
	cout << "i4: ";
	cin >> i4;
	
	cout << i3 <<endl;
	cout << i4 <<endl;
	return 0;
}