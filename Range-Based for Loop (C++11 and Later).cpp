#include <iostream>
using namespace std;
//Range-Based for Loop (C++11 and Later)

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
	
    for (int element : arr) {
        cout << element << " ";
    }

    return 0;
}
