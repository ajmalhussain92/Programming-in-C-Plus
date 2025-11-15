#include<iostream>
#include<typeinfo>
using namespace std;
//Sum of Numbers divisible by 3 to N


int main(){

int num, sum = 0, i = 1;

cout<<"Enter a num: ";
cin>>num;


while(i<=num){
    
    if(i%3 == 0){
        
        cout<< i <<" ";
        
        sum += i;
        
         
    }
    
    ++i;
}

cout<<"\nTotal sum: "<<sum;


    return 0;
}