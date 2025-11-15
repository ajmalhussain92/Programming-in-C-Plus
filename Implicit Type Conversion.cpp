#include <iostream>
using namespace std;
//Implicit Type Conversion

int main() {
    
    
    bool b = true;
    char c = b;
    
    cout << "Boolean: " << b << "\tCharacter: " << c << endl;
    
    
    char ch = 'A';
    int i = ch;
    
    cout << "Character: " << ch << "\tInteger: " << i << endl;
    
    
    int x = 10;
    float y = x;
    
    cout << "Integer: " << x << "\tFloat: " << y << endl;
    
    
    char myChar = 'A';      // 65 (ASCII value)
    int myInt = 5;
    float myFloat = 10.5;
    float res = myChar + myInt + myFloat;
    
    cout << "Result: " << res << endl;
    
    return 0;
}
