#include<iostream>
using namespace std;
//Multiple Inheritance

class student{
	public:
	string name;
	int roll_no;
};

class teacher{
	public:
	double salary;
	string subject;
};

class TA : public teacher, public student { 
	public:
	
	//TA has both teacher and student property
};

int main(){
	
	TA t1;
	
	t1.name="xavier";	
	t1.roll_no=123;
	t1.salary=4588.96;
	t1.subject="dbms";
	
	cout<<t1.name<<endl;
	cout<<t1.roll_no<<endl;
	cout<<t1.salary<<endl;
	cout<<t1.subject<<endl;
	
	return 0;
}