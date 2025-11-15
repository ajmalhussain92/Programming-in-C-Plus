#include <iostream>
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // time
using namespace std;

int main () {

	string choices[] = {"rock", "paper", "scissors"};
	srand(time(0)); 	// seed the random generator
	
	cout << "\nChoose rock, paper or scissors (or 'q' to stop): ";
	
	string user;
	do {
		cout << "\nEnter your choice: ";
		cin >> user;
		
		if (user == "q") break;
		
		bool validChoice = false;
		for (string valid : choices) {
    		if (user == valid) {
        		validChoice = true;
        		break;
    		}
		}

		if (!validChoice) {
    		cout << "Invalid choice. Try again!" << endl;
    		continue; // restart the loop
		}
		
		int compIndex = rand() % 3;
		string computer = choices[compIndex];
		
		cout << "Computer chose: " << computer << endl;
		
		if (user == computer)
			cout << "It's a draw!";
		else if ((user == "rock" && computer == "scissors") ||
				(user == "paper" && computer == "rock") ||
				(user == "scissors" && computer == "paper"))
			cout << "You won!";
		else
			cout << "You lose!";
		
	} while (user != "q");
	
	cout << "\nThank you for playing!";
	
	return 0;
}