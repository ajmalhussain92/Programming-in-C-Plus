#include <iostream>
using namespace std;

int x = 10;			//global variable

int main() {
	
	int myNumbers[5] = {10, 20, 30, 40, 50};
	
	for (int i : myNumbers) {
  		cout << i << "\n";
	}
	
	for (int i=2; i<=1000; i=i+2) {
		cout << i << " ";
	}
	
	return 0;
}

/*
for (type variableName : arrayName) {
  // code block to be executed
}
*/