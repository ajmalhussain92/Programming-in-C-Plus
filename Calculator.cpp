#include <iostream>
#include <stdexcept> // For standard exceptions
#include <string>
using namespace std;

int main (){ 
	
	double num1, num2;
	string str;
	char myOperator;
	
	try {
		cout << "Enter 1st no.: ";
		cin >> num1;
		
		cout << "Enter Operator (+, -, *, /): ";
		getline (cin, str);		//reads full string
		
		
		if (!str.empty()) {
			myOperator = str[0];
		} else {
        cout << "No operator provided!" << endl;
    	} 
		
		cout << "Enter 2nd no.: ";
		cin >> num2;
		
		double result;
		
		switch (myOperator) {
			case '+':
				result = num1 + num2;
				break;
			case '-':
				result = num1 - (num2);
				break;
			case '*':
				result = num1 * num2;
				break;
			
			case '/':
				if (num2 == 0) { 
					throw runtime_error("Cannot divide by zero!");
				}
				result = num1 / num2;
				break;
			default:
			    throw invalid_argument("Invalid operator! Use +, -, *, or /.");
		}
		
		cout << "Result: " << result;
		
	} catch (const exception &e) {
		
		cout << "Error: " << e.what();
	} catch (...) {
	    cout << "Unknown error occurred!" << endl;
	} 
	
	return 0;
}