#include<iostream>
using namespace std;

//Enum = group of constants (unchangeable values)
/*Enum is short for "enumerations", which means "specifically listed". */
// good practice: write in upperCase
/* By default: 
first item has the value 0,
second item has the value 1,
and so on 2,3,4,... */
enum Color{
	RED,
	GREEN,
	BLUE               //last item does not need a comma
};
//If we assign first item (RED) the value of 1 then, second item has value 2, and third has 3, and so on...

enum Level{
	LOW = 1,
	MEDIUM,
	HIGH
};
//or we can give custom values to each itmes
enum Rank{
	POOP = 0,
	BRONZE = 25,
	GOLD = 50,
	PLATINUM = 75,
	GRANDMASTER = 100,
};
int main(){
	
	Color myColor=GREEN;  //enum as a data type
	if(myColor==GREEN){
		cout<<"My color is green"<<endl;
	}
	cout<<RED<<endl;    //output: 0
	cout<<GREEN<<endl;  //output: 1
	cout<<BLUE<<endl;   //output: 2
	
	cout<<LOW<<endl;    //output: 1
	cout<<MEDIUM<<endl; //output: 2
	
	
	return 0;
}