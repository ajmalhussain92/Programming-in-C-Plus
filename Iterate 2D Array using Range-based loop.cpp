#include <iostream>
using namespace std;

int main () {
	
	int arr[3][5] = {
					{30, 90, 20, 70, 50},
					{10, 40, 20, 50, 30},
					{70, 50, 20, 60, 10}
					};
	
	cout << "Elements in array:\n\n";
	for (const auto& row : arr) {
		for (const auto& element : row) {
			cout << element << " ";
		}
		cout << endl;
	}
	
	// Each row is a 1D array, and element is an individual value.
	
	return 0;
}