#include <iostream>
#include <vector>			// Vector library
using namespace std;

int main () {
	
	// Declare the vector of type string
	vector<string> cars;
	
	// Initialize the Vector
	cars = {"Volvo", "BMW", "Ford", "Mazda"};
	
	
	// Declaration + Initialization
	vector<int> numbers = {5, 10, 55, 20, 40};
	
	
	// Access elements of the Vector
	cout << cars[0] << endl;
	cout << cars[3] << endl;
	cout << numbers[4] << endl;
	
	cout << cars.at(2) << endl;
	cout << numbers.at(0) << endl;
	
	
	
	// Change a Vector Element
	cars[0] = "Mahindra";
	cars.at(2) = "Suzuki";
	numbers.at(3) = 75;
	
	
	
	// Vector Size
	cout << cars.size() << endl;
	cout << numbers.size() << endl;
	
	
	
	// Check if a Vector is Empty
	cout << cars.empty() << endl;
	cout << numbers.empty() << endl;
	
	
	
	
	// Loop Through a Vector (for-loop)
	for (int i=0; i<cars.size(); i++) {
		cout << cars[i] << " ";
	}
	
	cout << endl;
	
	for (int i=0; i<numbers.size(); i++) {
		cout << numbers[i] << " ";
	}
	
	cout << endl;
	
	// Loop Through a Vector (for-each loop)
	for (string i : cars) {
		cout << i << " ";
	}
	
	cout << endl;
	
	for (int i : numbers) {
		cout << i << " ";
	}
	
	
	cout << "\n---------------------------------------------------\n";
	// Insert Element on any Index using 'insert()' function
	
	vector<string> nums = {"Volvo", "Ford"};
	
	nums.insert(nums.begin(), "Toyota");					// Index 0 from 1st
	nums.insert(nums.begin() + 2, "BMW");					// Index 0 from 1st
	
	nums.insert(nums.end(), "Suzuki");						// Index last
	nums.insert(nums.end() - 1, "Mazda");					// Index 2nd from last

	for (string num : nums) {
	  cout << num << "\n";
	}
	
	
	return 0;
} 