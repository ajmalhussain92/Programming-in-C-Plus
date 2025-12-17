#include <iostream>
#include <vector>

using namespace std;

// Generate full Fibonacci Series upto n-th term using Simple Recursion (Pure Recursion)
// Simple Recursion = You compute every subproblem again and again without storing results.
// This is a Top-Down approach without Memoization.
// This is a single chain of recursive calls, not a branching binary tree.
// This is NOT Dynamic Programming (DP).

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

    for (int x : Series) 
    	cout << x << " ";
	
	return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(n)