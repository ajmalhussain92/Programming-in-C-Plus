#include<iostream>
using namespace std;
//Pyramid Pattern

int main(){

int  n;

cout<<"Enter a num: ";
cin>>n;

cout<<"\nPyramid Pattern\n";

for(int i=0; i<n; ++i){
    
    // spaces
    for(int j=i; j<n-1; j++){
        
        cout<< " ";
        
    }
    
    // numbers
    for(int k=0; k<i+1; k++){
        
        cout<<k+1;
    }
    
    
    // 3rd Triangle
    for(int c=i; c>0; c--){
        
        cout<<c;
    }
    
    cout<<endl;
}

	return 0;
}