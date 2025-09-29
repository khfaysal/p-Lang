
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
    int completionTime; // Time when process finishes
    int turnaroundTime; // Completion time - Arrival time
    int waitingTime;    // Turnaround time - Burst time
    bool completed;     // True if process is finished

    // Constructor to initialize process
    Process(int id, int at, int bt)
    {
        pid = id;
        arrivalTime = at;
        burstTime = bt;
        completed = false;
    }
};

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes; // List of all processes
    for (int i = 0; i < n; i++)
    {
        int at, bt;
        cout << "Enter arrival time for Process " << i + 1 << ": ";
        cin >> at;
        cout << "Enter burst time for Process " << i + 1 << ": ";
        cin >> bt;
        processes.push_back(Process(i + 1, at, bt)); // Add process to list
    }

    int completed = 0, currentTime = 0; // Track completed count and current time
    float totalWT = 0, totalTAT = 0;    // For total waiting and turnaround time
    string ganttChart = "";             // For Gantt chart display
    vector<int> ganttTime;              // Stores time points for Gantt chart
    ganttTime.push_back(currentTime);

    // Main scheduling loop
    while (completed < n)
    {
        int idx = -1;        // Index of next process to run
        int minBT = INT_MAX; // Minimum burst time found

        // Find the process with the shortest burst time that has arrived and not completed
        for (int i = 0; i < n; i++)
        {
            if (!processes[i].completed && processes[i].arrivalTime <= currentTime)
            {
                if (processes[i].burstTime < minBT)
                {
                    minBT = processes[i].burstTime;
                    idx = i;
                }
                else if (processes[i].burstTime == minBT && idx != -1)
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

        if (idx == -1)
        {
            // No process is ready, so CPU is idle
            int nextArrival = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if (!processes[i].completed && processes[i].arrivalTime > currentTime)
                    nextArrival = std::min(nextArrival, processes[i].arrivalTime);
            }
            if (nextArrival != INT_MAX)
            {
                if (ganttChart.empty() || ganttChart.substr(ganttChart.size() - 6) != "| Idle")
                    ganttChart += " | Idle";
                currentTime = nextArrival;
                ganttTime.push_back(currentTime);
            }
            else
            {
                currentTime++;
                ganttChart += " | Idle";
                ganttTime.push_back(currentTime);
            }
        }
        else
        {
            // Schedule the selected process
            Process &p = processes[idx];
            p.completionTime = currentTime + p.burstTime;        // Set completion time
            p.turnaroundTime = p.completionTime - p.arrivalTime; // TAT
            p.waitingTime = p.turnaroundTime - p.burstTime;      // WT
            p.completed = true;                                  // Mark as done
            currentTime = p.completionTime;                      // Move time forward
            completed++;

            totalWT += p.waitingTime;     // Add to total waiting time
            totalTAT += p.turnaroundTime; // Add to total turnaround time

            ganttChart += " | P" + to_string(p.pid); // Add process to Gantt chart
            ganttTime.push_back(currentTime);
        }
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
