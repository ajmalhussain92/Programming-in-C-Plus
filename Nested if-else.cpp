#include <iostream>
using namespace std;
//Nested if-else
int main() {
    double num1, num2, num3;
	
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    cout << "Third number: ";
    cin >> num3;

    double largest;
	
    if (num1 > num2){
        
        if(num1 > num3){
            largest = num1;
            
        }else{
            largest = num3;
            
        }
    }else{
        
        if(num2 > num3){
            largest = num2;
            
        }else{
            largest = num3;
            
        }
    }
	
    cout << "The largest number is: " << largest << endl;

    return 0;
}
