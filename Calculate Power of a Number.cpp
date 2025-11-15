#include<iostream>
using namespace std;

// Calculate Power of a Number 

int main(){
	
	int base,exponent,res=1;
	
	cout<<"Enter base : ";
	cin>>base;
	cout<<"Enter exponent : ";
	cin>>exponent;
	
	cout << "Base^Exponent: "<<base<<"^"<<exponent<<endl;
	
//	for(int i=1; i<=exponent; i++){
//		res = res * base;
//	}
	
//	int i=1;
//	while (i<=exponent){
//		res=res*base;
//		i++;
//	}

	int i=1;
	do{
		res = res * base;
		i++;
	}while(i<=exponent);
	
	cout<<"Result : "<<res;
	
	return 0;
}