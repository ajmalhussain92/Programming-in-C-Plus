#include <iostream>
#include <cmath>
using namespace std;

//Armstrong number

int main() {
    
    int origNum, tmpNum1, tmpNum2, rem, dig = 0, newNum = 0;
    
    cout << "Enter a number: ";
    cin >> origNum;
    
    tmpNum1 = tmpNum2 = origNum;
    
    // Evaluate no. of digits in the given number (e.g., num = 56 then digits = 2)
    while (tmpNum1 != 0) { 
        tmpNum1 /= 10;
        dig++;
    }
    
    // Evaluate armstrong number (e.g., num = 56 then 5^2 + 6^2)
    while (tmpNum2 != 0) {
        rem = tmpNum2 % 10;
        
        tmpNum2 /= 10;
        
        newNum = newNum + pow (rem, dig);
    } 
    
    cout << "New number: " << newNum << endl;
    
    if (newNum == origNum) 
		cout << origNum << " is an Armstrong number!\n";
	else 
		cout << origNum << " is not an Armstrong number!\n";
    
    return 0;
}