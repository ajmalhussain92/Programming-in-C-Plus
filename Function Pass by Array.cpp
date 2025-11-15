#include <iostream>
using namespace std; 

void myFunction1(int myNumbers[], int n) {
  for (int i = 0; i < n; i++) {
    cout << myNumbers[i] << "\n";
  }
} 

void myFunction2(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
} 

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction1(myNumbers, 5);
  
  myFunction2(myNumbers);
  
  return 0;
} 