#include <iostream>
#include <typeinfo>
using namespace std;
//Find Data Types of any Variable

int main() {
    
	int x = 578;
	cout << typeid(x).name() << endl;			//Output: i
	
	float f = 45.879;
	cout << typeid(f).name() << endl;			//Output: f
		
	string str = "Xavier";
	cout << typeid(str).name() << endl;			//Output: NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	
	char c = 'm';
	cout << typeid(c).name() << endl;			//Output: c

	
	cout << typeid(756.987).name() << endl;		//Output: d
	
	cout << typeid("Ajmal").name() << endl;		//Output: A6_c
	
	cout << typeid('g').name() << endl;			//Output: c
	
    return 0;
}

/*
First include <typeinfo> library to use 'typeid' operator

Syntax: typeid(variable/value).name()


Output-- 'typeid(...).name()' often returns a compiler-dependent mangled name 
		 rather than the human-readable type name (e.g., i for int in some compilers).


*/