#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    cout<<"Vector\n";
    
    //Vector Declaration and Definition
    vector <int> vec1 (5,7);                 // 5 elements, each is 7
    
    vector <int> vec2 = {5,7};              // 2 elements
    
    vector <double> vec3 = {2.5, 7.5, 3.14};
    
    vector <string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    
    // for loop
    for(int i=0; i<4; i++){		// size is required
        cout<<cars[i]<<" ";		// indexing
    }
    
    cout<<"\n";
    
    // Range-based loop
    for(double val : vec3){
        
        cout<<val<<" ";
    }
    
    return 0;
}