#include <iostream>
using namespace std;
//Program to print all ASCII value

class ASCII{
    char ch;
    
    public:
    void show(){
        for(int i=0; i<=255; i++){
        cout <<" "<< (char)i<< i;
        }
    }
};

int main(){
    ASCII asc;
    
    asc.show();

    return 0;
}