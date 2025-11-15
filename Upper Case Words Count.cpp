#include <iostream>
#include <sstream>  // for istringstream
#include <cctype>   // for isupper
using namespace std;

int main() {
    string myStr;
    
    cout << "Enter a string: ";
    getline(cin, myStr);  // input full line with spaces
    
    istringstream iss(myStr);
    string word;
    int wordCount = 0;
    int upperStartCount = 0;

    while (iss >> word) {  // split by spaces
        wordCount++;
        if (isupper(word[0])) {
            upperStartCount++;
        }
    }

    cout << "There are " << wordCount << " words in the text '" << myStr << "'." << endl;
    cout << "Out of them, " << upperStartCount << " word(s) start with an uppercase letter." << endl;

    return 0;
}
