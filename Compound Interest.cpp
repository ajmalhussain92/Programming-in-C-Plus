#include<iostream>
#include<cmath>
// Compound Interest: Principle amount changes every year in the tenure.

int main(){
	
	float p, r, t;
	
	std::cout<<"Principle: ";
	std::cin>>p;
	
	std::cout<<"Rate: ";
	std::cin>>r;
	
	std::cout<<"Time: ";
	std::cin>>t;
	
	float A = p * pow((1 + r / 100), t);
	
	float CI = A - p;        // Compound Interest = Amount - P
	
    std::cout << "Compound interest is " << CI;
	
	return 0;
}