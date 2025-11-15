#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

// Structure to represent a process
struct Process {
    int pid;        // Process ID
    int arrivalTime; // Arrival time
    int burstTime;  // Burst time
    int completionTime; // Completion time
    int turnaroundTime; // Turnaround time
    int waitingTime; // Waiting time
};

void calculateTimes(vector<Process>& processes) { 
    int n = processes.size();
    int currentTime = 0;

    // Sort processes by Arrival Time
    sort(processes.begin(), processes.end(), [](Process a, Process b) { 
        return a.arrivalTime < b.arrivalTime;
    });

    // Calculate completion time, turnaround time, and waiting time
    for (int i = 0; i < n; i++) {
        // Process starts execution when the CPU is free (max of arrival and current time)
        currentTime = max(currentTime, processes[i].arrivalTime);
        processes[i].completionTime = currentTime + processes[i].burstTime;
        currentTime = processes[i].completionTime;

        processes[i].turnaroundTime = processes[i].completionTime - processes[i].arrivalTime;
        processes[i].waitingTime = processes[i].turnaroundTime - processes[i].burstTime;
    }
}

void displayTable(const vector<Process>& processes) { 
    cout << setw(10) << "PID" 
         << setw(15) << "Arrival Time" 
         << setw(15) << "Burst Time" 
         << setw(15) << "Completion Time" 
         << setw(15) << "Turnaround Time" 
         << setw(15) << "Waiting Time" << endl;

    for (const auto& process : processes) {
        cout << setw(10) << process.pid
             << setw(15) << process.arrivalTime
             << setw(15) << process.burstTime
             << setw(15) << process.completionTime
             << setw(15) << process.turnaroundTime
             << setw(15) << process.waitingTime << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    // Input process details
    for (int i = 0; i < n; i++) {
        cout << "Enter Arrival Time and Burst Time for Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].pid = i + 1;
    }

    // Calculate times for processes
    calculateTimes(processes);

    // Display results
    cout << "\nFCFS Scheduling Results:\n";
    displayTable(processes);

    return 0;
}
