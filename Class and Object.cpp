#include<iostream>
using namespace std;
class teacher{
	public:
	string name;
	string dept;
	string subject;
	//encapsulation helps in data hiding
	private:
	float salary;
	
	void changeDept(string newDept){
		dept=newDept;
	}
	void setSalary(float s){   //setter function
		salary=s;
	}
	float getSalary(){       //getter function
		return salary;
	}
};
class account{
	double balance;
	string password;
	public:
	string accountId;
	string username;
};
class student{
	public:
	string name;
	int age;
	public:
	//default constructor
	student(){
		cout<<"This is - Default costructor"<<endl;
		name="xavier";
		age=89;
	}
	//parameterized constructor
	student(string n, int a){
		cout<<"This is - Parameterized constructor"<<endl;
		name=n;
		age=a;
	}
		/*   OR
	student(string name, int age){
		cout<<"This is parameterized constructor!"<<endl;
		this-> name=name;        left name is the class name
		this-> age=age;          right is for parameter
	}
	*/
	//copy constructor
	student(student &p){                               // Constructor Overloading
		cout<<"This is - Copy constructor"<<endl;
		name=p.name;
		age=p.age;
	}
	 void display(){
	 	cout<<"Name: "<<name<<endl;
	 	cout<<"Age: "<<age<<endl;
	 }
};
//Outer function to display object property; class members must be public
void getInfo(student &obj){                       // ( className &obj )  as parameter
	 	cout<<"Name: "<<&obj.name<<endl;
	 	cout<<"Age: "<<&obj.age<<endl;
	 }
int main(){
	student s1;
	s1.display();
	getInfo(s1);
	student s2("Rafi",89);
//	getInfo(s2); or s2.display();

student s3(s1);  //copy
	
//	int x=20;
//	int *ptr=&x;
//	cout<<ptr;   //address of x+
	return 0;
}