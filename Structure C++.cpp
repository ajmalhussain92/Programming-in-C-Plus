#include<iostream>
using namespace std;

// Structure in C++
// 1. Anonymous Struct with a Variable

struct {							// The struct has NO name
	string brand;
	string model;
  	int year;
} Car;								// You cannot create another variable of the same structure later


// 2. Anonymous Struct with Multiple Variables (struct Person { ... } Person1, Person2;)

struct Person {
    string name;
    int id;
    char grade;
} Person1, Person2;


// 3. Named Struct Definition

struct Student {
  	string name;
  	int id;
  	char grade;
};


int main () {
	
	return 0;
}

/* Notes:
	
	1. Anonymous Struct with a Variable
	
		The struct has NO name
		I need a one-time structure, I don’t care about reuse.
		You cannot create another variable of the same structure later
		You create ONE variable 'Car' immediately.
		
		Purpose:
			Quick, single-use data grouping.
			Useful for small, local, or temporary data.
		
		
	2. Anonymous Struct with Multiple Variables
	
		Struct HAS a name (Person)
		You can create more variables later.
		Define structure + create some objects right now.
		Both type and variables are created
		
		Purpose:
			When you already know some objects are needed.
			Reduces repetitive declarations.
			
			
	
	3. Named Struct Definition Only (struct Student)
	
		Only a type definition.
		No variables created yet.
		Pure blueprint.
		You create variables later.
		I’m defining a data model.

		Purpose:
			Most common & professional approach.
			Reusable
			Clean design
			Best for large programs


*/