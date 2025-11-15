#include<iostream>
using namespace std;

//Find Square of Number upto given n numbers.

void sqr(int n){
    for(int i=1; i<=n; i++){
    	
        cout<< i<<"^2"<<" = "<<i*i<<"\n";
        
    }
    
}

int main(){
	
	int x;
	
	cout<<"Enter: ";
	
	cin>>x;
	
	sqr(x);
	
	return 0;
}