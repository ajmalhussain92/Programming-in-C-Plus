#include <iostream>
using namespace std;
//Inheritance in C++
/*
Inheritance: The capability of a class to derive properties and characteristics from another class,
is called Inheritance.
=>  Inherit attributes(data members) and methods(functions) from one class to another.

Syntax for Inheritance:
class  derivedClassName : access-specifier  baseClassName {
       //    body ....
};

Benefits: Inheritance models real-world hierarchical relationships between entities, that makes the code more intuitive and easier to relate to 
		real-world problems.
*/

class person{     // base or parent class
	public:
	string name;
	int age;
	
	public:
	//constructor
	person(string name, int age){
		cout<<"Parent class constructor."<<endl;
		this->name=name;
		this->age=age;
	}
	void display(){
		cout<<"person display."<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
	}
};

class student : public person {    // derived or child class
	public:
	int roll_no;
	
	public:
	//constructor
	student(string name, int age, int roll_no) : person(name, age){
		this->roll_no=roll_no;
		cout<<"Child class constructor."<<endl;
	}
	
	void display(){
		cout<<"student display."<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"age: "<<age<<endl;
	    cout<<"roll no.: "<<roll_no<<endl;
	}
};

int main() {

person p1("owl",41);
student s1("huss",67,987);
p1.display();
s1.display();

return 0;
}