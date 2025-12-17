#include <iostream>
#include <cstring>
using namespace std;

// Find only the nth term Fibonacci Number using Recursion + Memoization (Top-Down)
// This is a Recursion + Dynamic Programming (DP).

// Memoization (Store results)
int dp[100];			// No of Dimension = No of Parameters Passed (changeable Param)

int fib (int n) {
	
	if (n == 1 || n == 2)
		return 1;
	
	if (dp[n] != -1)
		return dp[n];
	
	return dp[n] = fib (n - 1) + fib (n - 2);
};

int main () {
	
	memset (dp, -1, sizeof(dp));
	
	int n;
    cout << "Enter n: ";
    cin >> n;
    
    int fib_num = fib(n);
    
	cout << "Fibonacci Number: " << fib_num;
	
	return 0;
}

/*

Take array size 1 more (n+1) in DP. We don't use 0 index in DP.

*/