#include <iostream>
using namespace std;

int x = 10;			//global variable

int main() {
	
	int myNumbers[5] = {10, 20, 30, 40, 50};
	
	for (int i : myNumbers) {
  		cout << i << "\n";
	}
	
	return 0;
}

/*
for (type variableName : arrayName) {
  		// code block to be executed
}
*/