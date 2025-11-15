#include <iostream>
using namespace std;

void horizontalLine () {
	cout << "--------------------------------------------\n";
}

int main () {
	
	double currBal = 5000, depositBal, withdrawalBal;
	
	
	horizontalLine ();
	cout << "\t\tATM Machine\n";
	horizontalLine ();
	
	
	int option;
	
	do {
		
		horizontalLine ();
		cout << " 1. Current Balance\n 2. Cash Deposit\n 3. Cash Withdrawal\n 4. Exit\n";
		horizontalLine ();
		
		
		cout << "Enter option: ";
		cin >> option;
		
//		if (!(option <= 49 && option >= 57)); cout << "Invalid option. Please enter a valid option.\n"; option = 0;
		
		switch (option) {
			
			case 1:
				cout << "Your current balance: " << currBal << endl;
				break;
			
			case 2:
				cout << "Enter cash for deposit: ";
				cin >> depositBal;
				currBal += depositBal;
				break;
				
			case 3:
				cout << "Enter cash for withdrawal: ";
				cin >> withdrawalBal;
				
				if (withdrawalBal > currBal) cout << "Insufficient Balance.\n";
				else  currBal -= withdrawalBal;
				break;
				
			case 4:
				cout << "Thank you for using the ATM.";
				break;
				
			default:
				cout << "Invalid option. Please enter a valid option.\n";
		}
		
	} while (option != 4);
	
	return 0;
} 