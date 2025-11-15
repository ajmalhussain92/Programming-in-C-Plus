#include <iostream>
using namespace std;
//C-style cast

int main() {
    double num = 5.75;
    int truncated = (int)num;         // C-style cast

    cout << "Original: " << num << endl;
    cout << "C-style Cast: " << truncated << endl;
    
    
    
	return 0;
}