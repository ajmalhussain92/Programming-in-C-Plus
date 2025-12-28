#include <iostream>
using namespace std;

int main () {
	
	double num1, num2, res;
	string str;
	char myOperator;
	
	try {
		cout << "Enter num1: ";
		cin >> num1;
		
		cout << "Enter operator (+, -, /, *): ";
		cin >> str;
		
		myOperator = str[0];
		
		cout << "Enter num2: ";
		cin >> num2;
		
		switch (myOperator) {
			case '+':
				res = num1 + num2;
				break;
			
			case '-':
				res = num1 - num2;
				break;
			
			case '*':
				res = num1 * num2;
				break;
			
			case '/':
				if (num2 == 0) throw runtime_error ("Cannot divide by zero!");
				res = num1 / num2;
				break;
			
			default:
				throw invalid_argument ("Invalid operator! Use +, -, *, or /.");
		}
		
		cout << "Result: " << num1 << " " << myOperator << " " << num2 << " = " << res << endl;	
	} catch (const exception &e) {
		cout << "Error: " << e.what();
	} catch (...) {
		cout << "Unknown error occurred!" << endl;
	}
	
	
	
	return 0;
}