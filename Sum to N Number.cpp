#include <iostream>
using namespace std;
//Sum to N Number

int main() {
    int number;
    cout << "Enter a number:";
    cin>>number;
    
    int sum = 0;
    // sum = number* (number+1) / 2;		// shortcut mathematical formula 
    
    
    
    for(int count = 1; count<=number; ++count){
        
        sum = sum + count;
        
    }
    
    
    cout<<"Sum is: "<<sum;
    
    
    
    

    return 0;
}
