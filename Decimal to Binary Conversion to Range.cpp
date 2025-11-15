#include <iostream>
#include <cmath>
using namespace std;
//Decimal to Binary Conversion upto Range

int decimalToBinary(int Decimal_Num){
    
    int quotient, remainder, binaryNum = 0, i = 0;
    
    while(Decimal_Num != 0){ 
        
        remainder = Decimal_Num % 2;
        
        binaryNum = binaryNum + remainder * pow(10, i);		// b + (0*10^0), b + (b*10^1), b + (b*10^2), ...
        
        Decimal_Num /= 2;
        i++;
    } 
    return binaryNum;
}

void printBinary(int range){
    
    cout <<"Decimal\t\tBinary\n";
    
    for(int i=0; i<=range; i++){
        
        cout << i << "\t\t"<<decimalToBinary(i) <<endl;
    }
}

int main() {
    
    int range;
    
    cout << "Enter the range: ";
    cin >> range;
    
    printBinary(range);
    
    return 0;
}
