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
        cout<<"ASCII value for the character '"<< ch <<"' is: " << (int)ch <<endl;
//        cout<<"ASCII value for the character '"<< ch <<"' is: " << static_cast<int>(ch) <<endl;
    }
};

int main(){
    ASCII asc;
    
    asc.input();
    asc.output();

    return 0;
}