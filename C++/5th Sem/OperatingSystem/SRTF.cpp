#include <iostream>
#include <vector>
#include <iomanip>
#include <climits>
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
    bool isCompleted;
};

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n);
    for (int i = 0; i < n; ++i)
    {
        processes[i].pid = i + 1;
        cout << "Enter arrival time and burst time for Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].remainingTime = processes[i].burstTime;
        processes[i].isCompleted = false;
    }

    int completed = 0, currentTime = 0;
    float totalWT = 0, totalTAT = 0;
    string ganttChart = "";
    vector<int> ganttTime;
    ganttTime.push_back(0);

    int prev = -1;

    while (completed < n)
    {
        int idx = -1;
        int minRT = INT_MAX;

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
            if (prev != processes[idx].pid)
            {
                ganttChart += " | P" + to_string(processes[idx].pid);
                ganttTime.push_back(currentTime);
                prev = processes[idx].pid;
            }

            processes[idx].remainingTime--;
            currentTime++;

            if (processes[idx].remainingTime == 0)
            {
                processes[idx].completionTime = currentTime;
                processes[idx].turnaroundTime = processes[idx].completionTime - processes[idx].arrivalTime;
                processes[idx].waitingTime = processes[idx].turnaroundTime - processes[idx].burstTime;
                processes[idx].isCompleted = true;
                completed++;

                totalWT += processes[idx].waitingTime;
                totalTAT += processes[idx].turnaroundTime;
            }
        }
        else
        {
            currentTime++;
            if (prev != -2)
            {
                ganttChart += " | Idle";
                ganttTime.push_back(currentTime - 1);
                prev = -2;
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
