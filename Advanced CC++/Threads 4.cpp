#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;

int counter = 0;

void increment () {
    // lock_guard<mutex> lock (m);
    m.lock ();
    cout << ++counter << endl;
    m.unlock ();
}

int main () {
    thread t1 (increment);
    thread t2 (increment);
    thread t3 (increment);
    thread t4 (increment);
    
    t1.join ();
    t2.join ();
    t3.join ();
    t4.join ();
    
    return 0;
}

// Now result is consistent.
// Everytime 1 2 3 4