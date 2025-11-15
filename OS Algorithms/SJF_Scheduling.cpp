#include <iostream> 
#include <algorithm>
using namespace std; 
 
class Process { 
public: 
    int id, arrival_time, burst_time, priority, completion_time, turnaround_time, waiting_time; 
	
    Process() { 
        id = 0; 
        arrival_time = 0;
        burst_time = 0;
        priority = 0;
        completion_time = 0;
        turnaround_time = 0;
        waiting_time = 0;
    } 
 
    void inputProcessDetails(int i) { 
        id = i; 
        cout << "Enter Arrival Time, Burst Time and Priority for process " << id << ": "; 
        cin >> arrival_time >> burst_time >> priority; 
    } 
}; 

// Priority Scheduling Algorithm (Non-Preemptive)
void Priority_Scheduling (Process processes[], int n) {
    
	int time=0, comletedCount=0;
	bool comleted[n] = {false};
	
	while (comletedCount < n) {
	    int highest_priority_index = -1;
        int highest_priority = -1;
        
        for (int i=0; i<n; i++) {
            if (!comleted[i] && processes[i].arrival_time <= time) {
                if (highest_priority_index == -1 || processes[i].priority > highest_priority) {
                    highest_priority_index = i;
                    highest_priority = processes[i].priority;
                }
            }
        }
        if (highest_priority_index == -1) {
                time++;
            } else {
                
                int i = highest_priority_index;
                
                
                // Execute the process
                processes[i] = processes[highest_priority_index];
                processes[i].completion_time = time + processes[i].burst_time;
                processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
                processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
                comleted[i] = true;
                comletedCount++;
                
                time = processes[i].completion_time;		// Move time forward
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

int main() { 
    
	int n;
    
    cout<<"Enter no. of processes: ";
    cin >> n;
    
    Process processes[n];
    
    for (int i=0; i<n; i++) { 
        processes[i].inputProcessDetails(i+1);
    } 
    
    Priority_Scheduling (processes, n);
 
    return 0; 
} 