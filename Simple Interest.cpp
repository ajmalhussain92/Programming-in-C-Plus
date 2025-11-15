#include <iostream>

//Simple Interest : Principle remains constant throughout the tenure.

int main(){
    float p,r,t;
    
   std::cout<<"Enter p: ";
   std::cin>>p;
   
   std::cout<<"Enter r: ";
   std::cin>>r;
   
   std::cout<<"Enter t: ";
   std::cin>>t;
   
   float I = p*r*t /100;
   
   std::cout<<"Interest: "<< I << std::endl;
   
   std::cout<<"Total Amount: "<< I + p ;
   
    return 0;
}