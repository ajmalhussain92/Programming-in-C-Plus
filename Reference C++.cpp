#include<iostream>
using namespace std;
//A reference variable is a "reference" to an existing variable,
// and it is created with the & operator

int main(){
	string food="pizza";
	string &meal=food;  //meal is referenced to food
	//now meal = pizza
	//data type must be same like referenced variable
	cout<<meal<<endl;
	   
	int x=90;
	int &y=x;
	cout<<y<<endl;    //output: 90
	
	cout<< &y;        //output: 0x78fdcc
	
	return 0;
}