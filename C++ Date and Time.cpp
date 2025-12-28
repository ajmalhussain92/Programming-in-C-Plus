#include <iostream>
#include <ctime>
using namespace std;

//C++ Date and Time

int main(){

    time_t t;
    time(&t);
    
    cout << ctime(&t);
    
    return 0;
}