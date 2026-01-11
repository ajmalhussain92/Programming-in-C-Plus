#include <iostream>
using namespace std;

int main () {
  int* ptr = new int;
  *ptr = 35;
  cout << *ptr << endl;		// Value at "new int"
  cout << ptr << endl;		// Address of "new int"
  cout << &ptr << endl;		// Address of "ptr" itself.
  
  return 0;
}