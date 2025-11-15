#include <iostream>
using namespace std;
class Process {
	public:
	int id, arrival_time, burst_time, remaining_time, completion_time, turnaround_time, waiting_time;
		
	Process () {
		id = 0;
        arrival_time = 0;
        burst_time = 0;
        remaining_time = 0;
        completion_time = 0;
        turnaround_time = 0;
        waiting_time = 0;
	}
	
	void inputProcessDetails(int i){
		id = i;
		cout << "Enter Arrival Time and Burst Time for process " << id << ": "; 
        cin >> arrival_time >> burst_time;
        remaining_time = burst_time;
	}
};

void RR_Scheduling (Process processes[], int n, int time_quantum) {
	
	int time=0, completedCount = 0;
	bool completed[n] = {false};
	
	while (completedCount < n) {
		bool all_idle = true;
		
		for (int i=0; i<n; i++) {
			
			if (!completed[i] && processes[i].arrival_time <= time) {	
				all_idle = false;
				
				if (processes[i].remaining_time > time_quantum) {
					time += time_quantum;
					processes[i].remaining_time -= time_quantum;
				} else {
					time += processes[i].remaining_time;
					processes[i].remaining_time = 0;
					processes[i].completion_time = time;
					processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
                    processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;
                    
                    completed[i] = true;
                    completedCount++;
				}
			}
		}
		if (all_idle) time++;
	}
	
	cout << "\nPID\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\n";
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
	int n, time_quantum;
	cout << "Enter number of processes: ";
    cin >> n;
    
	Process processes[n];
	
	for (int i=0; i<n; i++) {
		processes[i].inputProcessDetails(i+1);
	}
	
	cout << "Enter time quantum: ";
    cin >> time_quantum;
    
	RR_Scheduling (processes, n, time_quantum);
	
	return 0;
}