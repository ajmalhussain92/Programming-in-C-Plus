#include <iostream>
using namespace std;

// Pass size by reference to reflect changes outside the function
void shift(int k, int arr[], int &size) {
    for (int i = k; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // decrease size after shifting
}

int main() { 
    int size = 5;
    int arr[size] = {1, 2, 2, 5, 7};

    int i = 1;
    while (i < size) {
        if (arr[i] == arr[i - 1]) {
            shift(i, arr, size); // shift elements and decrease size
            // don't increment i here because new element at arr[i] needs to be checked
        } else {
            i++;
        }
    }

    // Print the array after removing duplicates
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}