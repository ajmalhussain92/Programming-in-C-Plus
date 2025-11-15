#include <iostream>
#include <cstdlib>
using namespace std;

// C++ Code to Observe Heap Growth


int main() {
    // Allocate dynamic memory using new
    int *ptr1 = new int;
    int *ptr2 = new int;
    int *ptr3 = new int;

    cout << "Heap Memory Addresses (new int):\n";
    cout << "ptr1: " << ptr1 << endl;
    cout << "ptr2: " << ptr2 << endl;
    cout << "ptr3: " << ptr3 << endl;

    // Allocate memory using malloc (C-style)
    int *ptr4 = (int*) malloc(sizeof(int));
    int *ptr5 = (int*) malloc(sizeof(int));

    cout << "\nHeap Memory Addresses (malloc):\n";
    cout << "ptr4: " << ptr4 << endl;
    cout << "ptr5: " << ptr5 << endl;

    // Free allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;
    free(ptr4);
    free(ptr5);

    return 0;
}
