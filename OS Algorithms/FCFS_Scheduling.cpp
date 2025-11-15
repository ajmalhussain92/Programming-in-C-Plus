#include <iostream> 
#include <algorithm>
using namespace std; 
 
class Process { 
public: 
    int id, arrival_time, burst_time, completion_time, turnaround_time, waiting_time; 
	
    Process() { 
        id = 0; 
        arrival_time = 0;
        burst_time = 0;
        completion_time = 0;
        turnaround_time = 0;
        waiting_time = 0;
    } 
 
    void inputProcessDetails(int i) { 
        id = i; 
        cout << "Enter Arrival Time and Burst Time for process " << id << ": "; 
        cin >> arrival_time >> burst_time; 
    } 
};

void FCFS_Scheduling (Process processes[], int n) {
	
    sort(processes, processes + n, [](Process a, Process b) { 		// sort a/c to arrival time
        return a.arrival_time < b.arrival_time;
    });
        
    // calculate completion time
    processes[0].completion_time = processes[0].arrival_time + processes[0].burst_time; 
        
    for (int i = 1; i < n; i++) { 
        if (processes[i].arrival_time > processes[i - 1].completion_time) 				// Tracks if CPU is idle
            processes[i].completion_time = processes[i].arrival_time + processes[i].burst_time; // no need to add and track prevoius process completion time
        else 
            processes[i].completion_time = processes[i - 1].completion_time + processes[i].burst_time; 
    }
        
    // calculate turnaround time (TAT = CT - AT)
    for (int i = 0; i < n; i++) { 
        processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time; 
    } 
        
    // calculate waiting time (WT = TAT - BT) 
    for (int i = 0; i < n; i++) { 
        processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time; 
    } 
        
    sort (processes, processes + n, [](Process a, Process b) {		// sort a/c to id
        return a.id < b.id;
    });
    
    cout << "\nProcess\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\n"; 
    for (int i = 0; i < n; i++) { 
        cout << processes[i].id << "\t" 
             << processes[i].arrival_time << "\t" 
             << processes[i].burst_time << "\t" 
             << processes[i].completion_time << "\t\t" 
             << processes[i].turnaround_time << "\t\t" 
             << processes[i].waiting_time << "\n"; 
    } 
} 

int main() { 
    int n;
    
    cout<<"Enter no. of processes: ";
    cin >> n;
    
    Process processes[n];
    
    for (int i=0; i<n; i++) { 
        processes[i].inputProcessDetails(i+1);
    } 
    
    FCFS_Scheduling (processes, n);
 
    return 0; 
} 


/* 
std::sort(start, end, comparison_function);

'processes' = First element (index 0);
'processes + n' = Position after the last element (index n-1).

sortProcesses() modifies the original array.

*/