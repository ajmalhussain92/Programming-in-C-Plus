#include <iostream>
#include <limits>   // required for std::numeric_limits
using namespace std;
int main(){
	cout<<"Enter any real number and know all its properties.\n";
	cout<<"===================================================\n";
	int n;
	bool validInput=false;
	while(!validInput){
		cout<<"Enter an integer: ";
		cin>>n;
		if(cin.fail()){
			cin.clear();                 //Resets or clear the fail state
			cin.ignore(std::numeric_limits<int>::max(),'\n');  //ignore the invalid input
			cin.ignore(std::numeric_limits<int>::min(),'\n');  //Discards the invalid input from the buffer
			cout<<"Invalid input. Please enter an integer only.\n";
		}else{
			validInput=true;
		}
	}
	cout<<"You entered the integer "<<n;
	return 0;
}

// cin/cout are I/O streams in C++