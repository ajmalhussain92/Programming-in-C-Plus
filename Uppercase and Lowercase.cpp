#include<iostream>
using namespace std;
//Uppercase and Lowercase


int main(){


	char ch;
	
	cout<<"Enter char: ";
	cin>>ch;
	
	
	if(ch >= 65 && ch <= 90){
	
	cout <<"Uppercase "<<endl;
	
	}else if(ch >= 97 && ch <= 122){
	    
	    cout <<"Lowercase "<<endl;
	    
	}else{
	    cout <<"Not alphabetical character "<<endl;
	}


    return 0;
}