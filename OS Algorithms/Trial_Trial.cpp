#include <iostream>
using namespace std;

class Person {
	public:
		string name;
		int age;
		
		Person () {
			cout << "Default constructor called!";
			name = "Default_name";
			age = 23;
		}
};

int main () {
	
	cout << "Character\tASCII\n";
	
	for (int i = 33; i <= 125; i++) {
		cout << char(i) << "\t\t" << i << endl;
	}
	
	char ch;
	
	do {
		cout << "\nEnter a character: ";
		cin >> ch;
	
		cout << "ASCII value: " << int (ch);
		
	} while (ch != 'q');
	
	cout << "\nThank you!";
	
	return 0;
}