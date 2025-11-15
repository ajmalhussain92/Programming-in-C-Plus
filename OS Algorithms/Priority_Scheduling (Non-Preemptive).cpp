#include <iostream>
#include <algorithm>
using namespace std;
// Priority Scheduling (Non-Preemptive)

class Process {
    public:
    int id, arrival_time, burst_time, priority, completion_time, turnaround_time, waiting_time;
    
    Process () {
        id = arrival_time = burst_time = priority = completion_time = turnaround_time = waiting_time = 0;
    }
    
    void inputProcessDetails (int i) {
        id = i;
        cout << "Enter Arrival time, Burst time, and Priority of process " << id << ": ";
        cin >> arrival_time >> burst_time >> priority;
    }
};

void Priority_Scheduling (Process processes[], int n) {
    
    sort (processes, processes + n, [](Process a, Process b){
        if (a.arrival_time == b.arrival_time) {
            return a.priority > b.priority;
        } else {
            return a.arrival_time < b.arrival_time;
        }
    });
    
    int time = 0, completedCount = 0;
    bool completed[n] = {false};
    
    while (completedCount < n) {
        
        int highest_priority_index = -1;
        int highest_priority = -1;
        
        for (int i=0; i<n; i++) {
            
            if (!completed[i] && processes[i].arrival_time <= time) {
                if (highest_priority_index == -1 || processes[i].priority > highest_priority) {
                    highest_priority_index = i;
                    highest_priority = processes[i].priority;
                }
            }
        }
        
        // If no process has arrived yet, increase time
        if (highest_priority_index == -1) {
            time++;
        } else {
            int i = highest_priority_index;

            // Execute the process
            processes[i].completion_time = time + processes[i].burst_time;
            processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
            processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
            completed[i] = true;
            completedCount++;

            // Move time forward
            time = processes[i].completion_time;
        }
    }
    
    cout << "PID\tArrival\tBurst\tPriority\tCompletion\tTurnaround\tWaiting\n";
    for (int i=0; i<n; i++) { 
        cout << processes[i].id << "\t"
             << processes[i].arrival_time << "\t"
             << processes[i].burst_time << "\t"
             << processes[i].priority << "\t\t"
             << processes[i].completion_time << "\t\t"
             << processes[i].turnaround_time << "\t\t"
             << processes[i].waiting_time << "\n";
    } 
} 

int main () {
    int n;
    
    cout << "Enter no. of processes: ";
    cin >> n;
    
    Process processes[n];
    
    for (int i=0; i<n; i++) {
        processes[i].inputProcessDetails (i+1);
    }
    
    Priority_Scheduling (processes, n);
    
    return 0;
}