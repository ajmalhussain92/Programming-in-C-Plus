#include<iostream>

// Combination & Permutation:
int f(int n){
    int fct=1;
    for(int i=1; i<=n; i++){
    fct*=i;
    }
    return fct;
}

int main(){
    
    int n,r;
    
   std::cout<<"Enter n: ";
   std::cin>>n;
   
   std::cout<<"Enter r: ";
   std::cin>>r;
   
   int a=f(n), b= f(r), c = f(n-r);
	//combination
	std::cout<<"Combination is: "<<a/(b*c)<<std::endl;
	
	//permutation
	std::cout<<"Permutation is: "<<a / c<<std::endl;
	
	return 0;
}