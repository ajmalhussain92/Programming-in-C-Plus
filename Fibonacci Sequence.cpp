#include <iostream>
#include <vector>

using namespace std;

int fibonacci_recursive (int n) {
	vector<int> sequence ;
	if (n <= 0) {
		return -1;
	} 
	else if (n == 1) {
		return sequence[0];
	}
	else if (n == 2) {
		return sequence[0, 1];
	}
	else {
		sequence = fibonacci_recursive (n - 1);
		sequence.push(sequence[-1] + sequence[-2]);
		return sequence;
	}
}

int main () {
	
	
	return 0;
}