
#include <iostream> // for input and output
#include <vector>   // to use vector container
#include <iomanip>  // for output formatting
#include <climits>  // for INT_MAX
using namespace std;

// Structure to store process details
struct Process
{
    int pid;            // Process ID
    int arrivalTime;    // Time when process arrives
    int burstTime;      // Time required by process
    int remainingTime;  // Remaining burst time (for preemption)
    int completionTime; // Time when process finishes
    int turnaroundTime; // Completion time - Arrival time
    int waitingTime;    // Turnaround time - Burst time
    bool isCompleted;   // True if process is finished
};

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n); // List of all processes
    for (int i = 0; i < n; ++i)
    {
        processes[i].pid = i + 1; // Assign process ID
        cout << "Enter arrival time and burst time for Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].remainingTime = processes[i].burstTime; // Set remaining time
        processes[i].isCompleted = false;                    // Mark as not completed
    }

    int completed = 0, currentTime = 0; // Track completed count and current time
    float totalWT = 0, totalTAT = 0;    // For total waiting and turnaround time
    string ganttChart = "";             // For Gantt chart display
    vector<int> ganttTime;              // Stores time points for Gantt chart
    ganttTime.push_back(0);

    int prev = -1; // To track previous process for Gantt chart

    // Main scheduling loop
    while (completed < n)
    {
        int idx = -1;        // Index of next process to run
        int minRT = INT_MAX; // Minimum remaining time found

        // Find the process with the shortest remaining time that has arrived and not completed
        for (int i = 0; i < n; ++i)
        {
            if (!processes[i].isCompleted && processes[i].arrivalTime <= currentTime &&
                processes[i].remainingTime < minRT && processes[i].remainingTime > 0)
            {
                minRT = processes[i].remainingTime;
                idx = i;
            }
        }

        if (idx != -1)
        {
            // If a new process is scheduled, update Gantt chart
            if (prev != processes[idx].pid)
            {
                ganttChart += " | P" + to_string(processes[idx].pid);
                ganttTime.push_back(currentTime);
                prev = processes[idx].pid;
            }

            processes[idx].remainingTime--; // Run process for 1 unit
            currentTime++;

            if (processes[idx].remainingTime == 0)
            {
                // Process finished
                processes[idx].completionTime = currentTime;
                processes[idx].turnaroundTime = processes[idx].completionTime - processes[idx].arrivalTime;
                processes[idx].waitingTime = processes[idx].turnaroundTime - processes[idx].burstTime;
                processes[idx].isCompleted = true;
                completed++;

                totalWT += processes[idx].waitingTime;     // Add to total waiting time
                totalTAT += processes[idx].turnaroundTime; // Add to total turnaround time
            }
        }
        else
        {
            // No process is ready, so CPU is idle
            currentTime++;
            if (prev != -2)
            {
                ganttChart += " | Idle";
                ganttTime.push_back(currentTime - 1);
                prev = -2;
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
