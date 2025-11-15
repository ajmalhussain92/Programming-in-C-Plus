#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex1;
std::mutex mutex2;

void taskA() {
    std::lock_guard<std::mutex> lock1(mutex1);  // First lock
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
    std::cout << "Task A trying to lock mutex2...\n";
    std::lock_guard<std::mutex> lock2(mutex2);  // Second lock
    std::cout << "Task A completed.\n";
}

void taskB() {
    std::lock_guard<std::mutex> lock2(mutex2);  // First lock (reverse order)
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate work
    std::cout << "Task B trying to lock mutex1...\n";
    std::lock_guard<std::mutex> lock1(mutex1);  // Second lock
    std::cout << "Task B completed.\n";
}

int main() {
    std::thread t1(taskA);
    std::thread t2(taskB);

    t1.join();
    t2.join();

    std::cout << "Main thread finished.\n";
    
    return 0;
}

/*
Both threads get stuck waiting for each other, and the program just freezes indefinitely.
It doesn't crash or loop, it just sits there... doing nothing forever

*/