#include <iostream>
#include <random>
#include <ctime>
using namespace std;

void generateRand () {
    srand (time (0));
    int rand_num = rand ();
    cout << rand_num << endl;
}


int main () { 
    
    cout << "\n------------------------------------------------------\n";
    cout << "\t\t Generate Random Number";
    cout << "\n------------------------------------------------------\n";
    
    int input;
    
    while (input) {
        cout << "Generate random number (type any number): ";
        cin >> input;
        generateRand ();
    }
    
    
    return 0;
}