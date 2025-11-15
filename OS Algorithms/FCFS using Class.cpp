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
    static void sortProcesses(Process processes[], int n){ 
        sort(processes, processes + n, [](Process a, Process b) { 
                return a.arrival_time < b.arrival_time;
        }); 
    } 
    
    // Function to calculate completion time 
    static void calculateCompletionTime(Process processes[], int n) { 
        processes[0].completion_time = processes[0].arrival_time + processes[0].burst_time; 
        for (int i = 1; i < n; i++) { 
            if (processes[i].arrival_time > processes[i - 1].completion_time) 
                processes[i].completion_time = processes[i].arrival_time + processes[i].burst_time; 
            else 
                processes[i].completion_time = processes[i - 1].completion_time + processes[i].burst_time; 
        } 
    } 

    // Function to calculate turnaround time (TAT = CT - AT) 
    static void calculateTurnaroundTime(Process processes[], int n) { 
        for (int i = 0; i < n; i++) { 
            processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time; 
        } 
    } 
 
    // Function to calculate waiting time (WT = TAT - BT) 
    static void calculateWaitingTime(Process processes[], int n) { 
        for (int i = 0; i < n; i++) { 
            processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time; 
        } 
    } 
 
    static void showProcessDetails (Process processes[], int n) { 
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
}; 

int main() { 
    int n;
    
    cout<<"Enter no. of processes: ";
    cin >> n;
    
    Process processes[n];
    
    for (int i=0; i<n; i++) {
        processes[i].inputProcessDetails(i+1);
    }
    
    Process :: sortProcesses (processes, n);
    
    Process :: calculateCompletionTime (processes, n);
    
    Process :: calculateTurnaroundTime (processes, n);
    
    Process :: calculateWaitingTime (processes, n);
    
    Process :: showProcessDetails (processes, n);
 
    return 0; 
} 


/* 
std::sort(start, end, comparison_function);

'processes' = First element (index 0);
'processes + n' = Position after the last element (index n-1).

sortProcesses() modifies the original array.

*/