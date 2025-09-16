
// Round Robin Scheduling Implementation
#include <iostream>  // for input and output
#include <vector>    // to use vector container
#include <queue>     // for queue (used in RR)
#include <iomanip>   // for output formatting
#include <algorithm> // for sorting
using namespace std;

// Structure to store process details
struct Process
{
    int pid;            // Process ID
    int arrivalTime;    // Time when process arrives
    int burstTime;      // Time required by process
    int remainingTime;  // Remaining burst time
    int completionTime; // Time when process finishes
    int turnaroundTime; // Completion time - Arrival time
    int waitingTime;    // Turnaround time - Burst time
    bool inQueue;       // True if process is in the queue
};

int main()
{
    int n, timeQuantum;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n); // List of all processes
    for (int i = 0; i < n; i++)
    {
        processes[i].pid = i + 1; // Assign process ID
        cout << "Enter arrival time and burst time for Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].remainingTime = processes[i].burstTime; // Set remaining time
        processes[i].inQueue = false;                        // Not in queue initially
    }

    cout << "Enter time quantum: ";
    cin >> timeQuantum;

    int currentTime = 0, completed = 0; // Track current time and completed count
    float totalWT = 0, totalTAT = 0;    // For total waiting and turnaround time
    queue<int> q;                       // Queue for ready processes
    string ganttChart = "";             // For Gantt chart display
    vector<int> ganttTime;              // Stores time points for Gantt chart
    ganttTime.push_back(currentTime);

    // Sort processes by arrival time
    auto arrivalCmp = [](Process a, Process b)
    {
        return a.arrivalTime < b.arrivalTime;
    };
    sort(processes.begin(), processes.end(), arrivalCmp);

    // Find the first process to arrive and add to queue
    int firstIdx = -1;
    for (int i = 0; i < n; i++)
    {
        if (processes[i].arrivalTime == processes[0].arrivalTime)
        {
            firstIdx = i;
            break;
        }
    }
    q.push(firstIdx);
    processes[firstIdx].inQueue = true;

    // Main scheduling loop
    while (completed < n)
    {
        if (!q.empty())
        {
            int idx = q.front(); // Get next process from queue
            q.pop();

            ganttChart += " | P" + to_string(processes[idx].pid); // Add process to Gantt chart
            ganttTime.push_back(currentTime);

            int execTime = min(timeQuantum, processes[idx].remainingTime); // Time to run
            currentTime += execTime;                                       // Move time forward
            processes[idx].remainingTime -= execTime;                      // Decrease remaining time

            // Add new arrivals to queue
            for (int i = 0; i < n; i++)
            {
                if (!processes[i].inQueue && processes[i].arrivalTime <= currentTime && processes[i].remainingTime > 0)
                {
                    q.push(i);
                    processes[i].inQueue = true;
                }
            }

            if (processes[idx].remainingTime > 0)
            {
                // If not finished, add back to queue
                q.push(idx);
            }
            else
            {
                // Process finished
                processes[idx].completionTime = currentTime;
                processes[idx].turnaroundTime = processes[idx].completionTime - processes[idx].arrivalTime;
                processes[idx].waitingTime = processes[idx].turnaroundTime - processes[idx].burstTime;
                totalWT += processes[idx].waitingTime;     // Add to total waiting time
                totalTAT += processes[idx].turnaroundTime; // Add to total turnaround time
                completed++;
            }
        }
        else
        {
            // No process is ready, so CPU is idle
            ganttChart += " | Idle";
            ganttTime.push_back(currentTime);
            currentTime++;
            // Check if any process has arrived
            for (int i = 0; i < n; i++)
            {
                if (!processes[i].inQueue && processes[i].arrivalTime <= currentTime && processes[i].remainingTime > 0)
                {
                    q.push(i);
                    processes[i].inQueue = true;
                    break;
                }
            }
        }
    }

    ganttTime.push_back(currentTime); // Add final time to Gantt chart

    // Print process table
    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for (const auto &p : processes)
    {
        cout << "P" << p.pid << "\t" << p.arrivalTime << "\t" << p.burstTime << "\t"
             << p.completionTime << "\t" << p.turnaroundTime << "\t" << p.waitingTime << "\n";
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
