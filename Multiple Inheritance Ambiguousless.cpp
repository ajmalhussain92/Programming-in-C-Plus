#include<iostream>
using namespace std;
//Multiple Inheritance without Ambiguity

class Interface { 
    public:
    virtual void exercise() = 0;
};

class student : public virtual Interface { 
	public:
	string name;
	int roll_no;
	void exercise() { 
	    cout << "Runs in the morning!\n";
	} 
};

class teacher : public virtual Interface { 
	public:
	double salary;
	string subject;
	void exercise() {
	    cout << "Runs in the evening!\n";
	} 
};

class TA : public teacher, public student {
	public:
	 void exercise() {  // Override exercise() in TA to resolve ambiguity
        student::exercise(); // or teacher::exercise();
        //teacher::exercise();
    }
};

int main(){ 
	
	TA t1;
	
	t1.name="xavier";	
	t1.roll_no=123;
	t1.salary=45828.96;
	t1.subject="dbms";
	
	
	t1.exercise();
	
	TA t2;
	
	t2.salary = 70000;
	t2.subject="Java Programming";
	t2.exercise();
	
	return 0;
} 