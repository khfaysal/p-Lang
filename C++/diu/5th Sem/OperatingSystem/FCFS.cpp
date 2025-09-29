
#include <iostream>  // for input and output
#include <vector>    // to use vector container
#include <algorithm> // for sorting
#include <iomanip>   // for setting output format
using namespace std;

// Structure to store process details
struct Process
{
    int pid;            // Process ID
    int arrivalTime;    // Time when process arrives
    int burstTime;      // Time required by process to execute
    int completionTime; // Time when process finishes
    int turnaroundTime; // Completion time - Arrival time
    int waitingTime;    // Turnaround time - Burst time
};

// Function to sort processes by arrival time
bool compareByArrival(Process a, Process b)
{
    return a.arrivalTime < b.arrivalTime;
}

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n); // List of all processes
    for (int i = 0; i < n; i++)
    {
        processes[i].pid = i + 1; // Assign process ID
        cout << "Enter arrival time for Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime;
        cout << "Enter burst time for Process " << i + 1 << ": ";
        cin >> processes[i].burstTime;
    }

    // Sort processes by arrival time
    sort(processes.begin(), processes.end(), compareByArrival);

    int currentTime = 0; // Keeps track of current time

    float totalWT = 0, totalTAT = 0; // To store total waiting and turnaround time
    string ganttChart = "";          // For Gantt chart display
    vector<int> ganttTime;           // Stores time points for Gantt chart
    ganttTime.push_back(currentTime);

    // Calculate completion, turnaround, and waiting times for each process
    for (int i = 0; i < n; i++)
    {
        Process &p = processes[i];

        if (currentTime < p.arrivalTime)
        {
            ganttChart += " | Idle"; // CPU is idle if no process has arrived
            currentTime = p.arrivalTime;
            ganttTime.push_back(currentTime);
        }

        ganttChart += " | P" + to_string(p.pid);             // Add process to Gantt chart
        p.completionTime = currentTime + p.burstTime;        // When process finishes
        p.turnaroundTime = p.completionTime - p.arrivalTime; // Total time in system
        p.waitingTime = p.turnaroundTime - p.burstTime;      // Time spent waiting

        currentTime = p.completionTime; // Move current time forward
        ganttTime.push_back(currentTime);

        totalWT += p.waitingTime;     // Add to total waiting time
        totalTAT += p.turnaroundTime; // Add to total turnaround time
    }

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
