
// Priority Scheduling (Non-preemptive) Implementation
#include <iostream>  // for input and output
#include <vector>    // to use vector container
#include <iomanip>   // for output formatting
#include <algorithm> // for sorting (not used here)
#include <climits>   // for INT_MAX
using namespace std;

// Structure to store process details
struct Process
{
    int pid;            // Process ID
    int arrivalTime;    // Time when process arrives
    int burstTime;      // Time required by process
    int priority;       // Priority of the process (lower value = higher priority)
    int completionTime; // Time when process finishes
    int turnaroundTime; // Completion time - Arrival time
    int waitingTime;    // Turnaround time - Burst time
    bool completed;     // True if process is finished
};

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n); // List of all processes
    cout << "Enter Arrival Time, Burst Time and Priority for each process:\n";
    for (int i = 0; i < n; ++i)
    {
        processes[i].pid = i + 1; // Assign process ID
        cout << "Process P" << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime >> processes[i].priority;
        processes[i].completed = false; // Mark as not completed
    }

    int currentTime = 0, completed = 0; // Track current time and completed count
    float totalWT = 0, totalTAT = 0;    // For total waiting and turnaround time
    string ganttChart = "";             // For Gantt chart display
    vector<int> ganttTime;              // Stores time points for Gantt chart
    ganttTime.push_back(currentTime);

    // Main scheduling loop
    while (completed < n)
    {
        int idx = -1;                  // Index of next process to run
        int highestPriority = INT_MAX; // Lower value means higher priority

        // Find the highest priority process that has arrived and not completed
        for (int i = 0; i < n; ++i)
        {
            if (!processes[i].completed && processes[i].arrivalTime <= currentTime)
            {
                if (processes[i].priority < highestPriority)
                {
                    highestPriority = processes[i].priority;
                    idx = i;
                }
                else if (processes[i].priority == highestPriority && idx != -1)
                {
                    // If tie, choose earlier arrival, then lower PID
                    if (processes[i].arrivalTime < processes[idx].arrivalTime)
                    {
                        idx = i;
                    }
                    else if (processes[i].arrivalTime == processes[idx].arrivalTime)
                    {
                        if (processes[i].pid < processes[idx].pid)
                            idx = i;
                    }
                }
            }
        }

        if (idx != -1)
        {
            ganttChart += " | P" + to_string(processes[idx].pid); // Add process to Gantt chart
            ganttTime.push_back(currentTime);

            currentTime += processes[idx].burstTime;                                                    // Move time forward
            processes[idx].completionTime = currentTime;                                                // Set completion time
            processes[idx].turnaroundTime = processes[idx].completionTime - processes[idx].arrivalTime; // TAT
            processes[idx].waitingTime = processes[idx].turnaroundTime - processes[idx].burstTime;      // WT
            processes[idx].completed = true;                                                            // Mark as done

            totalWT += processes[idx].waitingTime;     // Add to total waiting time
            totalTAT += processes[idx].turnaroundTime; // Add to total turnaround time
            completed++;
        }
        else
        {
            ganttChart += " | Idle"; // CPU is idle
            ganttTime.push_back(currentTime);
            currentTime++;
        }
    }

    ganttTime.push_back(currentTime); // Add final time to Gantt chart

    // Print process table
    cout << "\nProcess\tAT\tBT\tP\tCT\tTAT\tWT\n";
    for (const auto &p : processes)
    {
        cout << "P" << p.pid << "\t" << p.arrivalTime << "\t" << p.burstTime << "\t"
             << p.priority << "\t" << p.completionTime << "\t" << p.turnaroundTime << "\t" << p.waitingTime << "\n";
    }

    // Print average waiting and turnaround time
    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << totalWT / n << "\n";
    cout << "Average Turnaround Time: " << totalTAT / n << "\n";

    // Print Gantt chart
    cout << "\nGantt Chart:\n";
    cout << ganttChart << " |\n";
    for (int time : ganttTime)
    {
        cout << time << "\t";
    }
    cout << endl;

    return 0;
}
