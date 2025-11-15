#include <iostream>
#include <cmath>
using namespace std;
//Decimal to Binary Number Conversion

void decimalToBinary (int decimalNum) { 
    
    int binaryNum = 0, remainder, tenzPow = 0;
    
    while(decimalNum != 0){ 
        
        remainder = decimalNum%2;
        
        binaryNum = binaryNum + remainder * pow(10, tenzPow);   //Extension for 1's, 10's, 100's, 1000's, ...
        
        decimalNum /= 2;
        tenzPow++;
    } 
    cout << "Binary number: " << binaryNum;
} 

int main() {
    
    int decimalNum;
    
    cout << "Enter the Decimal number: ";
    cin >> decimalNum;
    
    decimalToBinary(decimalNum);
    
    return 0;
}
