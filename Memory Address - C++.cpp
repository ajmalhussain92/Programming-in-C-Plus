#include<iostream>
using namespace std;
//Memory Address in C++ :-
// & operator is also used to get the memory address of a variable
//References and Pointers are important in C++,
//because they give you the ability to manipulate the data in the computer's memory
//which can reduce the code and improve the performance.
/*These two features are one of the things that make C++ stand out
from other programming languages, like Python and Java.*/
int main(){
	string str="John";
	int x=980;
	float pi=3.14;
	cout<<&x<<endl; //output: 0x78fe1c (memory address of x)
	//address is in the hexadecimal form (0x...)
	//Note that you may not get the same result for memory address in your program.
	cout<<&pi<<endl;       //output: 0x78fdd8
	cout<<&str<<endl;      //output: 0x78fde0
	
	int arr[5]={1,2,3,4,5};
	cout<<&arr[2]<<endl;    //output: 0x78fdc0
	cout<<&arr[0]<<endl;    //output: 0x78fdc4
	cout<<&arr[1]<<endl;    //output: 0x78fdc8
    cout<<&arr[3]<<endl;    //output: 0x78fdcc
	cout<<&arr[4]<<endl;    //output: 0x78fdd0

	return 0;
}