#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
using namespace std;

atomic<bool> flag[2];
atomic<int> turn;

void process(int i) {
    int j = 1 - i;  // the other process

    for (int k = 0; k < 5; k++) {
        // Entry Section
        flag[i] = true;
        turn = j;

        while (flag[j] && turn == j);  // Busy wait

        // Critical Section
        cout << "Process " << i << " is in the critical section." << endl;
        this_thread::sleep_for(chrono::milliseconds(100));

        // Exit Section
        flag[i] = false;

        // Remainder Section
        cout << "Process " << i << " is in the remainder section." << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}

int main() {
    flag[0] = false;
    flag[1] = false;
    turn = 0;

    thread t1(process, 0);
    thread t2(process, 1);

    t1.join();
    t2.join();

    return 0;
}
