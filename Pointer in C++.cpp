#include<iostream>
using namespace std;
//Pointer in C++
//Pointer: A pointer in C++ is a variable that stores the memory address of another variable.
/* There are three ways to declare pointer variables, but the first way is preferred:

string* mystring;      // Preferred (good practice)
string *mystring;
string * mystring;
*/

int main(){
	int h = 90;
	
	cout<< &h <<endl;  //address of h
	int* hPtr = &h;
	
	cout<<hPtr <<endl; //address of h
	
	cout<<*hPtr <<endl; //value of h
	
    cout<<&hPtr<<endl; //address of self pointer hPtr
	
	int x;
	int* xPtr;       //made new pointer (it's a variable that stores only memory address of another variable)
	xPtr = new int;  //new memory allocated to pointer (it's a pointer_variable of the pointer *xPtr)

	cout<<"Enter a value: ";
	cin>>*xPtr;  //Always dereference to get new value
	
	x = *xPtr;   //Always dereference to set new value
	
	cout<<"value of x: "<<x<<endl;
	cout<<"Memory Address of X: "<< &x <<endl;  //Output: 0x78fe04
	cout<<"Memory Address of xPtr: "<<xPtr<<endl;  //Output: 0xc418e0
	
	int &a=x;
	cout<<a<<endl;     //output: equals to x
	cout<<&a<<endl;    //Output: 0x78fe04
	
	/*
	Dereferenceing: Pointer can be used to get or set the value of a variable, by using the * operator.
	*/
	int *s;
	s=new int;
	*s=90;
	cout<<s<<endl;   // Reference: Address  ( 0xc418e0 )
	cout<<*s<<endl;  // Dereference: Value  ( 90 )
	
	
	float *g;
	g=new float;
	*g=90.89;
	
	cout<<*g<<endl;  //value
	cout<<g<<endl;   //address
	
	int dr=89;
	int* ptr;
	*ptr = dr;
	cout<<*ptr<<endl;
	cout<<dr<<endl;
	cout<<ptr<<endl;
	
	cout<<"this\n";
	int y=90;
	int* ptrr=&y;
	
	cout<<ptrr;  //output: 0x78fde0
	cout<<&y;    //output: 0x78fde0 (same)
	
	int z = 5;
	int* pt = &z;
	
	cout<< z <<endl;   
	cout<< &z <<endl;
	
	*pt = 90;    //Modifying pointer
	
	cout<< z <<endl;   
	cout<< *pt <<endl;
	
	return 0;
}