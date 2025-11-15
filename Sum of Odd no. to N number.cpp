#include<iostream>
using namespace std;
//Sum of Odd no. to N number


int main(){

int num;

cout <<"Enter a range: ";
cin>>num;

int oddSum = 0;

for(int i=1; i<= num; ++i){
    
    if(i%2 != 0){

        oddSum += i;
        cout<< i <<" ";
    }
}


cout <<"\nTotal sum of odd numbers upto "<<num<<" : " << oddSum << endl;


    return 0;
}