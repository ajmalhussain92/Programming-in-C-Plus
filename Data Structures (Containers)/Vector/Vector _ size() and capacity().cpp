#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector<int> vec;
    
    // Adding elements
    for (int i = 1; i <= 5; i++) {
        vec.push_back(i);
        cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << endl;
    }

    // Reserve additional capacity
    vec.reserve(20);
    cout << "After reserving, Capacity: " << vec.capacity() << endl;

    // Shrink to fit
    vec.shrink_to_fit();
    cout << "After shrinking, Capacity: " << vec.capacity() << endl;

    return 0;
}
