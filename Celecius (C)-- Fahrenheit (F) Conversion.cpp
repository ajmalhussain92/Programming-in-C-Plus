#include<iostream>
using namespace std;

//Celcius -- Fahrenheit Conversion

float C_to_F(float c){    // for C to F 
	
	return 1.8 * c + 32 ;
}

float F_to_C(float f){    // for F to C
	
	return ( f - 32 ) / 1.8 ;
}

int main(){
	
	float c_f;
	int op;
	
	cout<<"1 for Celcius to Fahrenheit Conversion\n2 for Fahrenheit to Celcius Conversion\n3 for Exit\n\n";
	
	do{
	
	cout<<"\n\nEnter option: ";
	cin>>op;
	switch(op){
		case 1:
			cout<<"Celcius to Fahrenheit:\n";
			cout<<"Celcius: ";
			cin>>c_f;
			cout<<C_to_F(c_f)<<" F";
			break;
			
			case 2:
				cout<<"Fahrenheit to Celcius :\n";
				cout<<"Fahrenheit: ";
				cin>>c_f;
				cout<<F_to_C(c_f)<<" C";
				break;
				
					case 3:
						cout<<"Thank you!\n";
						break;
						
							default:
								cout<<"Wrong option!\n";
					
	}
}while(op!=3);
	return 0;
}