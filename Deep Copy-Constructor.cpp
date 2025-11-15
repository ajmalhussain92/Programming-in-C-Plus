#include<iostream>
using namespace std;
//Deep Copy Constructor
class student{
	public:
	string name;
	float* cgpa;   // cgpa pointer, points randomly (it is memory address)
	
	public:
	// parameterized constructor
	student(string n, float c){
		cout<<"Parameterized constructor!"<<endl;
			
		name=n;
			
		cgpa = new float;  // points in heap memory
		*cgpa = c;         // pointer is derefernced and cgpa value stored
			
		}
	// copy constructor (deep copy)
	student(student &obj){
		cout<<"Parameterized constructor!"<<endl;
		
		name=obj.name;
				
		cgpa = new float;          // points in heap memory
		*cgpa = *obj.cgpa;         // pointer is derefernced and cgpa value stored	
		}
		
	display(){
		cout<<"Display function!"<<endl;
		cout<<"Name is: "<<name<<endl;
		// to find value from pointer, always dereference it through '*'
		cout<<"Cgpa is: "<<*cgpa<<endl;  //dereferenced to get value
	}
};

int main(){
	student s1("neha",9.6);
	s1.display();
	
	student s2(s1);
	
	*(s2.cgpa) = 5.5;  //cgpa is different to s2
	
	s1.display();
	
	s2.display();
	
	return 0;
}