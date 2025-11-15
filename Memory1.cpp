#include <iostream>
using namespace std;

int main () {
	
	int n;
	cout << "Enter a number: ";
	cin >> n;
	
	
	int revNum = 0, k = n;
	
	while (n) {
		revNum = revNum * 10 + n % 10;
		n /= 10;
	}
	
	cout << "Reversed number: " << revNum << endl;
	
	if (revNum == k) {
		cout << "The number " << k << " is palindrome.";
	} else {
		cout << "The number " << k << " is not palindrome.";
	}
	
	for (int i=0; i<k; i++) {
		cout << "\nLove u Farheen\n";
	}
	
	return 0;
}