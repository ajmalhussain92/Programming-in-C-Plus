#include <iostream>
#include <cmath>
using namespace std;

int sol(){

    for(int x=50; x>=-20; x--){
        
        if( pow(x,2) + 2 * x - 8 == 0){
            
            return x;
        }
        
    }
    return -21;
}

int main(){
    int r = sol();
    
    if(r==-21){
        cout << "solution not found."<<endl;
        
    }else{
        cout << "solution is: "<<r <<endl;
        
    }
    
    return 0;
}