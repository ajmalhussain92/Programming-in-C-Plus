#include<iostream>
using namespace std;

// Structure in C++
// 1. Anonymous Struct with a Typedef Alias

struct {
	string brand;
	string model;
  	int year;
} Car;

struct m {
  	int myNum;
  	string myString;
} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas


// 2. Named Struct Definition

struct Student {
  	string name;
  	int id;
  	char grade;
};


// 3. Named Struct with Two variables of that type
struct Person {
    string name;
    int id;
    char grade;
} Person1, Person2;



int main () {
	
	
	return 0;
}

/* Notes:
	
	1. Anonymous Struct with a Typedef Alias
	
		Declares an anonymous struct (no name after struct).
		
		Creates a variable named Student of that anonymous struct type.
		
		Student is a variable, not a type.

	
	2. Named Struct Definition
	
		Declares a struct type named struct Student.

		You can create multiple variables of type struct Student


*/