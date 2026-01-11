#include <iostream>
#include <thread>
using namespace std;

void myFunction () {
	cout << "Hello, World!\n";
}

void threadFunction(int id) {
	cout << "Thread " << id << " is running.\n";
}

int main () {

	cout << "Look & observe some unconditional behavior\n";
	cout << "----------------------------------------------------------\n\n";
	
	// Create threads
	thread t1 (myFunction);
	thread t2 (threadFunction, 5);


	// Always call .join() or .detach()
	t1.join ();
	t2.detach ();


	return 0;
}