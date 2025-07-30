// Round Robin Scheduling Implementation
#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Process
{
    int pid;
    int arrivalTime;
    int burstTime;
    int remainingTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
    bool inQueue;
};

int main()
{
    int n, timeQuantum;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n);
    for (int i = 0; i < n; i++)
    {
        processes[i].pid = i + 1;
        cout << "Enter arrival time and burst time for Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].remainingTime = processes[i].burstTime;
        processes[i].inQueue = false;
    }

    cout << "Enter time quantum: ";
    cin >> timeQuantum;

    int currentTime = 0, completed = 0;
    float totalWT = 0, totalTAT = 0;
    queue<int> q;
    string ganttChart = "";
    vector<int> ganttTime;
    ganttTime.push_back(currentTime);

    auto arrivalCmp = [](Process a, Process b)
    {
        return a.arrivalTime < b.arrivalTime;
    };
    sort(processes.begin(), processes.end(), arrivalCmp);

    // Find the first process to arrive
    int firstIdx = -1;
    for (int i = 0; i < n; i++) {
        if (processes[i].arrivalTime == processes[0].arrivalTime) {
            firstIdx = i;
            break;
        }
    }
    q.push(firstIdx);
    processes[firstIdx].inQueue = true;

    while (completed < n)
    {
        if (!q.empty())
        {
            int idx = q.front();
            q.pop();

            ganttChart += " | P" + to_string(processes[idx].pid);
            ganttTime.push_back(currentTime);

            int execTime = min(timeQuantum, processes[idx].remainingTime);
            currentTime += execTime;
            processes[idx].remainingTime -= execTime;

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
                q.push(idx);
            }
            else
            {
                processes[idx].completionTime = currentTime;
                processes[idx].turnaroundTime = processes[idx].completionTime - processes[idx].arrivalTime;
                processes[idx].waitingTime = processes[idx].turnaroundTime - processes[idx].burstTime;
                totalWT += processes[idx].waitingTime;
                totalTAT += processes[idx].turnaroundTime;
                completed++;
            }
        }
        else
        {
            ganttChart += " | Idle";
            ganttTime.push_back(currentTime);
            currentTime++;
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

    ganttTime.push_back(currentTime);

    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for (const auto &p : processes)
    {
        cout << "P" << p.pid << "\t" << p.arrivalTime << "\t" << p.burstTime << "\t"
             << p.completionTime << "\t" << p.turnaroundTime << "\t" << p.waitingTime << "\n";
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
