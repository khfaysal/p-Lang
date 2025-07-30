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
    int completionTime;
    int turnaroundTime;
    int waitingTime;
    bool completed;

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

    vector<Process> processes;
    for (int i = 0; i < n; i++)
    {
        int at, bt;
        cout << "Enter arrival time for Process " << i + 1 << ": ";
        cin >> at;
        cout << "Enter burst time for Process " << i + 1 << ": ";
        cin >> bt;
        processes.push_back(Process(i + 1, at, bt));
    }

    int completed = 0, currentTime = 0;
    float totalWT = 0, totalTAT = 0;
    string ganttChart = "";
    vector<int> ganttTime;
    ganttTime.push_back(currentTime);

    while (completed < n)
    {
        int idx = -1;
        int minBT = INT_MAX;

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
            Process &p = processes[idx];
            p.completionTime = currentTime + p.burstTime;
            p.turnaroundTime = p.completionTime - p.arrivalTime;
            p.waitingTime = p.turnaroundTime - p.burstTime;
            p.completed = true;
            currentTime = p.completionTime;
            completed++;

            totalWT += p.waitingTime;
            totalTAT += p.turnaroundTime;

            ganttChart += " | P" + to_string(p.pid);
            ganttTime.push_back(currentTime);
        }
    }

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
