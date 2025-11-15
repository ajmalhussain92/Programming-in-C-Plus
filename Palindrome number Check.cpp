#include<iostream>
using namespace std;
//Palindrome number 

int main() {
    int num, k;
    cout << "Enter number: ";
    cin >> num;

	k = num;
	
    int reversed_num = 0;

    //Reverse the number
    while (num != 0) {								// Get the last digit
    	int remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;  // Append it to the reversed number
        num = num / 10;                                // Remove the last digit
    }

	if(k == reversed_num){
		cout<<"Yes, "<<k<<" is palindrome.";
	}else{
		cout<<"No, "<<k<<" is not palindrome.";
	}
        
    return 0;
}