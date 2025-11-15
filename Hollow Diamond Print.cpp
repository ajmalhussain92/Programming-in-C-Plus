#include <iostream>
using namespace std;
//Hollow Diamond Print

int main() {
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    //Upper Part
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << "*";
        
        if(i != 0){		//condition to print space from 2nd line
            for(int j=0; j<2*i-1; j++){		//Print odd spaces from 1
               cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    
    //Bottom Part
    for(int i=0; i<n-1; i++){
        for(int j=0; j<i+1; j++){
            cout << " ";
        }
        cout << "*";
        
        if(i != n-2){		//Avoid print double * in the last line
            //spaces
            for(int j=0; j<2*(n-2-i)-1; j++){		// 2*(n-2-i)-1; to print odd spaces from n-1 to 1
                
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
