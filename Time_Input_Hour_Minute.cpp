#include <iostream>
using namespace std;

// Hi, it is a basic time input codes visualizing how time adds up with hour and minute input.
// Specially when minute becomes greater then 60 it updates hour and minute itself.

int hour = 0, minute = 0;		// global variable

int addHour (int h) {
	
	hour += h;
	return hour;
}

int addMinute (int m) {
		
	if (m < 60) {
		minute += m;
	} else if (m == 60) {
		hour += 1;
	} else {
		hour += 1;
		minute += (m - 60);
	}
	
	// Every time checks minute >= 60 after input
	if (minute >= 60){
		hour += minute / 60; minute %= 60;
	}
	return minute;
}

void showTime () {
	cout << hour << " : " << minute << endl;
}

int main () {
	
	int option;
	
	do {
		cout << "Enter time: \n\t1. Hour\n\t2. Minute\n\t3. Exit" << endl;
		cout << "\t\tCurrent Time: ";	showTime ();
		cout << "--------------------------------------\n";
		cin >> option;
		
		switch (option) {
			int h, m;
			case 1:
				cout << "Enter Hour: ";
				cin >> h;
				addHour (h);
				break;
				
			case 2:
				cout << "Enter Minute: ";
				cin >> m;
				addMinute (m);
				break;
			
			case 3:
				cout << "Exit successfully.\n";
				break;
				
			default:
				cout << "Invalid option!\n\n";
		}
	} while (option != 3);
	
	return 0;
}