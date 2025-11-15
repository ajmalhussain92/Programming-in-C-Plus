#include<iostream>
using namespace std;
//Sum of Even no. to N number


int main(){

int num;

cout <<"Enter a range: ";
cin>>num;

int evenSum = 0;

for(int i=1; i<= num; ++i){
    
    if(i%2 == 0){

        evenSum += i;
        cout<< i <<" ";
    }
}


cout <<"\nTotal sum of odd numbers upto "<<num<<" : " << evenSum << endl;





    return 0;
}