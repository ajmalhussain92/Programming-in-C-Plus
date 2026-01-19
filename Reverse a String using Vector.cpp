#include <iostream>
#include <vector>
using namespace std;

string reverseString (string str) {
    vector<char> temp;
    
    // push str characters to temp
    for (int i = 0; i < str.length(); i++) {
        temp.push_back(str[i]);
    } 
    
    // Make a reversed string from end-begin vector traversal
    string revStr;
    for (int i = temp.size(); i >= 0; i--) {
        revStr += temp[i];
    }
    
    return revStr;
}

int main () {
    string str = "apple";
    string revStr = reverseString (str);
    
    cout << "Reversed string: " << revStr << endl;
    return 0;
}