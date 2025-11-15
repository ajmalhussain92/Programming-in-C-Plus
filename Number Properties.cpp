#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Enter any real number and know all its properties.\n";
	cout<<"===================================================\n";
	int n,i,c=0;
	cout<<"Number: ";
	cin>>n;
	
	//positive-negative check
	if(n>=0){
		cout<<"Positive"<<endl;
	}else{
		cout<<"Negative"<<endl;
	}
	//even-odd check
	if(n%2==0){
		cout<<"Even"<<endl;
	}else{
		cout<<"Odd"<<endl;
	}
	//composite-prime check
	for(i=1; i<=n; i++){
		if(n%i==0)
		c++;
	}
	if(n==1)
	cout<<"none";
	else if(c==2)
	cout<<"prime";
	else
	cout<<"composite";
	return 0;
}