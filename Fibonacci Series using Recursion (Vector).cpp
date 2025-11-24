#include <iostream>
#include <vector>

using namespace std;

// Fibonacci Series using Recursion
// This is pure recursion — NOT DP.

vector<int> fibonacci_recursive(int n) {
    if (n == 1) return {0};
    if (n == 2) return {0, 1};

    // get series up to n-1
    vector<int> Series = fibonacci_recursive(n - 1);

    // calculate next term
    int next = Series[Series.size() - 1] + Series[Series.size() - 2];

    Series.push_back(next);
    return Series;
}


int main () {
	
	int n;
    cout << "Enter n: ";
    cin >> n;
    
    vector<int> Series = fibonacci_recursive(n);

    for (int x : Series) {
    	cout << x << " ";
	}
	
	return 0;
}