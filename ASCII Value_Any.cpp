#include <iostream>
using namespace std;
//Program to print any ASCII value

class ASCII{
    char ch;
    
    public:
    void input(){
        cout<<"Enter any character: ";
        cin>>ch;
    }
    
    void output(){
        cout<<"ASCII value of "<<ch <<": "<<(int)ch;
    }
};

int main(){
    ASCII asc;
    
    asc.input();
    asc.output();

    return 0;
}