#include <iostream>
using namespace std;
// goto Statement

int main(){
	
    int n = -8;
    
    if(n >= 0){
        
        goto positive;
        
        cout<<"All statements below will not be executed including me\n";
        
        if(n%2==0){
            
            cout <<"Even\n";
        }else{
            
            cout <<"Odd\n";
        }
    }
    
positive:
    cout<<"It is a positive number\n";
    
    
    return 0;
}