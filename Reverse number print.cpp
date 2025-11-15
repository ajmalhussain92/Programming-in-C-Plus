#include <iostream>
using namespace std;

// Reverse number print

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    int reversed_num = 0;

    // Loop to reverse the digits of the number
    while (num != 0) {								// Get the last digit
    	int remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;  // Append it to the reversed number
        num = num / 10;                                // Remove the last digit
    }

    cout << "Reverse no. : "<< reversed_num;
                
    return 0;
}
/* 785         -->> 5 -> 50 -> 58 -> 580 -> 587
while 1:
0=0*10+785%10 =>0+5=5 =>ans=5
785=785/10 =>785=78 =>number=78

while 2:
5=5*10+78%10 =>5=50+8 =>ans=58
78=78/10 =>78=7 =>number=7

while 3:
58=58*10+7%10 =>58=580+7 =>ans=587
7=7/10 =>7=0 =>number=0

cout ans = 587
*/

/*
5 -> 50     ans*10
50+8        ans+unit
58 -> 580   ans*10
580+7       ans+unit
5870        ans*10
*/

