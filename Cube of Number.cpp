#include<iostream>
using namespace std;

//Find Cube of Number upto given n numbers.

void cube(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<"^3"<<" = "<<i*i*i<<"\n";
    }
    
}

int main(){
	
	int x;
	cout<<"Enter: ";
	
	cin>>x;
	
	cube(x);
	

	return 0;
}