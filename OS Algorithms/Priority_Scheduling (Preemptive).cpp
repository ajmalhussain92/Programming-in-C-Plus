#include <iostream>
#include <algorithm>
using namespace std;
// Priority Scheduling (Preemptive)

class Process {
public:
    int id, arrival_time, burst_time, priority;
    int completion_time, turnaround_time, waiting_time;
    
    Process() {
        id = arrival_time = burst_time = priority = completion_time = turnaround_time = waiting_time = 0;
    }

    void inputProcessDetails(int i) {
        id = i;
        cout << "Enter Arrival time, Burst time, and Priority of process " << id << ": ";
        cin >> arrival_time >> burst_time >> priority;
    }
};

void Preemptive_Priority_Scheduling(Process processes[], int n) {
    int time = 0;
    int completedCount = 0;
    int remaining_burst[n];
    bool isCompleted[n] = {false};

    for (int i = 0; i < n; i++) {
        remaining_burst[i] = processes[i].burst_time;
    }

    while (completedCount < n) {
        int idx = -1;
        int highest_priority = -1;

        for (int i = 0; i < n; i++) {
            if (processes[i].arrival_time <= time && !isCompleted[i]) {
                if (idx == -1 || processes[i].priority > highest_priority) {
                    idx = i;
                    highest_priority = processes[i].priority;
                }
            }
        }

        if (idx != -1) {
            // Execute the highest priority process for 1 unit of time
            remaining_burst[idx]--;
            time++;

            if (remaining_burst[idx] == 0) {
                processes[idx].completion_time = time;
                processes[idx].turnaround_time = processes[idx].completion_time - processes[idx].arrival_time;
                processes[idx].waiting_time = processes[idx].turnaround_time - processes[idx].burst_time;
                isCompleted[idx] = true;
                completedCount++;
            }
        } else {
            time++;  // Idle time
        }
    }

    cout << "\nPID\tArrival\tBurst\tPriority\tCompletion\tTurnaround\tWaiting\n";
    for (int i = 0; i < n; i++) {
        cout << processes[i].id << "\t"
             << processes[i].arrival_time << "\t"
             << processes[i].burst_time << "\t"
             << processes[i].priority << "\t\t"
             << processes[i].completion_time << "\t\t"
             << processes[i].turnaround_time << "\t\t"
             << processes[i].waiting_time << "\n";
    }
}

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    Process processes[n];

    for (int i = 0; i < n; i++) {
        processes[i].inputProcessDetails(i + 1);
    }

    Preemptive_Priority_Scheduling(processes, n);

    return 0;
}

/*

At each unit of time, we check which process has the highest priority among the arrived ones, and we execute that process only for one time unit,
then check again — allowing switching if a higher priority process arrives.

*/