#include <iostream>
using namespace std;

int main () {
	cout << rand () << endl;
	
	

	// Generate a random number between 0 and 100
	int randomNum = rand () % 101;  // don't output different random numbers each time the program runs
	cout << randomNum << endl;
	
	// To fix this, you can use the srand() function and add the time() function from the <ctime> library.
	// Get a different random number each time the program runs
    srand (time (0));
    
    int randNumber = rand () % 101;
	cout << randNumber << endl;

	return 0;
}