#include <bits/stdc++.h>

using namespace std;

int main () {
	vector<int> v = {5, 2, 9, 1};
	
	// Ascending
	sort (v.begin(), v.end());
	for (int i : v) cout << i << " ";		// Output: 1 2 5 9 
	cout << endl;
	
	
	// Descending
	sort (v.begin(), v.end(), greater<int>());
	for (int i: v) cout << i << " ";		// Output: 9 5 2 1 
}

/*

sort():

	- By default, "sort()" sorts in ascending order (smallest to largest).
	- It modifies the original container directly — it does not create a new container.

greater<int>():
	- It is a built-in comparison function (also called a functor in C++).
	- It just says: "sort bigger numbers first."
	- It is not a new vector or container.

*/