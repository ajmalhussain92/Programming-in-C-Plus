#include<iostream>
using namespace std;

// Multi-level Inheritance

class person{
	public:
	string name;
	int age;
};

class student : public person{
	public:
	int roll_no;
};

class gradStud : public student{
	public:
		string research;
};

int main(){
	
	gradStud g1;
	
	g1.name="bob";
	g1.age=34;
	g1.roll_no=123;
	g1.research="DSA";
	
	cout<<g1.name<<endl;
	cout<<g1.age<<endl;
	cout<<g1.roll_no<<endl;
	cout<<g1.research<<endl;
	
	return 0;
}