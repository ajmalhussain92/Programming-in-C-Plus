#include <iostream>
using namespace std;

int main () {
	
	int arr[3][5] = {
						{30, 90, 20, 70, 50},
						{10, 40, 20, 50, 30},
						{70, 50, 20, 60, 10}
					};
	
	cout << "Elements in array:\n\n";
	
	// Way 1st
	for (const auto& row : arr) {					// Iterate over each row
		for (const auto& element : row) {			// Iterate over the elements of the row
			cout << element << " ";
		}
		cout << endl;
	}

	// Way 2nd
	
	for (int (&row)[5] : arr) {
		for (int x : row) {
			cout << x << " ";
		}
		cout << endl;
	}
	
	return 0;
}

/* Notes:

'int (&row)[3]' declares row as a reference to the array of 3 integers, to correctly iterate over each row in arr.



*/