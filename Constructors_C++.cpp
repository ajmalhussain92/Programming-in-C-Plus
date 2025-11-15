#include<iostream>
using namespace std;

// Constructor 
/*
=> Used to initialize the objects.
=> Special type of function in a class.
=> Same name as the class.
=> It does not have any return type.
=> Memory allocation happens only when the constructor is called.
=> All classes have constructors.
=> If we do not create the constructor, compiler automatically creates it.
=> Constructor is necessary for object's initialization (Assigning values to data members of an object).
=> Constructor is automatically called at the time of object creation.
=> Note:- If default constructor not created, but parameterized constructor is created, then you cannot create an object without parameter.
*/

class student{
	public:
	string name;
	float cgpa;  
	
		// Default constructor
		student(){
			cout<<"Default constructor!"<<endl;
			name="Bob";
			cgpa=8.5;
		}
		// Parameterized constructor
		student(string n, float c){
			cout<<"Parameterized constructor!"<<endl;
			name=n;  
			cgpa=c;     
		}
		/*OR
//		student(string name, float cgpa){
//			cout<<"Parameterized constructor!"<<endl;
//			this -> name = name;  
//			this -> cgpa = cgpa;     
//		}
*/
		//Copy constructor
	    student(student &obj){
	    	cout<<"Copy constructor!"<<endl;
	    	name=obj.name;
	    	cgpa=obj.cgpa;
		}
	
	void display(){
		cout<<"Display function!"<<endl;
		cout<<"Name is: "<<name<<endl;
		cout<<"Cgpa is: "<<cgpa<<endl;
	}
};

//outer function to display
void getInfo(student p){
	cout<<"Name: "<<p.name<<endl;
	cout<<"Cgpa: "<<p.cgpa<<endl;
}

int main(){
	
	student s1;
	 // copy constructor
	student s3("goom",9.3);
	
	s3.display();
	getInfo(s1);
	
	cout<<s3.name;  //output: goom
	
	return 0;
}