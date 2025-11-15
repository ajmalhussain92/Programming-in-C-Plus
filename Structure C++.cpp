#include<iostream>
// Structure in C++
using namespace std;

//One Structure & multiple variables
struct{
	string brand;
	float price;
	bool isDeal;
}pen1,pen2,pen3;


//named structure  (means as a Data Type)
struct student{
	string name;
	int age;
};

int main(){
	//pen 1
	pen1.brand="link";
	pen1.price=6.4;
	pen1.isDeal=true;
	//pen 2
	pen1.brand="race";
	pen1.price=34;
	pen1.isDeal=true;
	cout<<pen1.isDeal<<endl;
	
	student s1;
	s1.name="rahul";
	s1.age=39;
	cout<<"name: "<<s1.name<<" "<<"Age: "<<s1.age<<endl;
	return 0;
}