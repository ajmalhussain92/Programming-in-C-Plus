#include <iostream>
#include <cmath>
using namespace std;
//Armstrong number
int main(){
    
    int origNum, tmpNum1, tmpNum2, rem, dig = 0, newNum = 0;
    
    cout<<"Enter a number: ";
    cin>>origNum;
    
    tmpNum1 = tmpNum2 = origNum;
    
    while(tmpNum1 != 0){
        
        tmpNum1 /= 10;
        dig++;
    }
    
    while(tmpNum2 != 0){
        rem = tmpNum2 % 10;
        
        newNum = newNum + pow(rem, dig);
        
        tmpNum2 /= 10;
    }
    
    if(newNum == origNum){
        cout<<origNum << " is an Armstrong number!\n";
    }else{
        cout<<origNum << " is not an Armstrong number!\n";
    }
    
    return 0;
}