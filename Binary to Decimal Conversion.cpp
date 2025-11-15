#include <iostream>
#include <cmath>
using namespace std;
//Binary to Decimal Conversion

void binaryToDec(int number){
    
    int decimalNum = 0, lastDig, twozPow = 0;
    
    while(number != 0){
        
        lastDig = number%10;
        
        decimalNum += lastDig * pow(2, twozPow);
        
        number/=10;
        twozPow++;
    }
    
    cout << "Decimal Number: " << decimalNum;
}

int main() {
    
    int binaryNum;
    
    cout << "Enter the Binary number: ";
    cin >> binaryNum;
    
    binaryToDec(binaryNum);
    
    return 0;
}
