#include<iostream>
using namespace std;
//Adding Complex Number
class Complex{
	public:
	float real;
	float imag;

Complex(){
	real = 0;
	imag = 0;
}
Complex(float r, float i){
	real = r;
	imag = i;
}
//Overload + operator
Complex operator+(Complex c){
	Complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}
void display(){
	if(imag>0){
		cout<<real<<" + "<<imag<<"i";
	}else{
		cout<<real<<imag<<"i";
	}	
}
};
int main(){
	Complex c1(40,70), c2(30,-30), c3;
	c3 = c1 + c2;
	c3.display();
	
	return 0;
}