#include <iostream>
#include<typeinfo>
using namespace std;
//Sum of Digits in a Number

int main() {
    
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    
    int sum = 0, remainder;
    
    while(num!=0){
        
        remainder = num % 10;
        
        num = num/10;
    
        sum += remainder;
    }
    
    cout << "Sum of digits: "<<sum<<endl;
    
    return 0;
}




//cout<<typeid(truncated).name();