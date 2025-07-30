// Priority Scheduling (Non-preemptive) Implementation
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <climits>
using namespace std;

struct Process
{
    int pid;
    int arrivalTime;
    int burstTime;
    int priority;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
    bool completed;
};

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n);
    cout << "Enter Arrival Time, Burst Time and Priority for each process:\n";
    for (int i = 0; i < n; ++i)
    {
        processes[i].pid = i + 1;
        cout << "Process P" << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime >> processes[i].priority;
        processes[i].completed = false;
    }

    int currentTime = 0, completed = 0;
    float totalWT = 0, totalTAT = 0;
    string ganttChart = "";
    vector<int> ganttTime;
    ganttTime.push_back(currentTime);

    while (completed < n)
    {
        int idx = -1;
        int highestPriority = INT_MAX;

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
                    // Tie-break: earlier arrival, then lower PID
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
            ganttChart += " | P" + to_string(processes[idx].pid);
            ganttTime.push_back(currentTime);

            currentTime += processes[idx].burstTime;
            processes[idx].completionTime = currentTime;
            processes[idx].turnaroundTime = processes[idx].completionTime - processes[idx].arrivalTime;
            processes[idx].waitingTime = processes[idx].turnaroundTime - processes[idx].burstTime;
            processes[idx].completed = true;

            totalWT += processes[idx].waitingTime;
            totalTAT += processes[idx].turnaroundTime;
            completed++;
        }
        else
        {
            ganttChart += " | Idle";
            ganttTime.push_back(currentTime);
            currentTime++;
        }
    }

    ganttTime.push_back(currentTime);

    cout << "\nProcess\tAT\tBT\tP\tCT\tTAT\tWT\n";
    for (const auto &p : processes)
    {
        cout << "P" << p.pid << "\t" << p.arrivalTime << "\t" << p.burstTime << "\t"
             << p.priority << "\t" << p.completionTime << "\t" << p.turnaroundTime << "\t" << p.waitingTime << "\n";
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << totalWT / n << "\n";
    cout << "Average Turnaround Time: " << totalTAT / n << "\n";

    cout << "\nGantt Chart:\n";
    cout << ganttChart << " |\n";
    for (int time : ganttTime)
    {
        cout << time << "\t";
    }
    cout << endl;

    return 0;
}
