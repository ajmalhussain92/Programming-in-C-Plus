#include <iostream>
#include <thread>
using namespace std;

int counter = 0;

void greet () {
	cout << "Hello, World!\n";
	cout << ++counter << endl;
}

int main () {

	cout << "Look & observe some unconditional behavior\n";
	cout << "----------------------------------------------------------\n\n";
	
	// Create threads	(Two threads accessing two same shared resources)
	thread t1 (greet);
	thread t2 (greet);


	// Always call .join() or .detach()
	t1.join ();
	t2.join ();


	return 0;
}


/*

This program actually has two unsynchronized shared resources:

	counter
	std::cout

*/