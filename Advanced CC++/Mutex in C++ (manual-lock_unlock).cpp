#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;
int counter = 0;

void increment () {
    m.lock ();        // lock
    counter++;
    m.unlock ();      // unlock
}

int main () {
    thread t1 (increment);
    thread t2 (increment);

    t1.join ();
    t2.join ();

    cout << counter << endl;  // Always 2
}
