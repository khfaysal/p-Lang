#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Process
{
    int pid;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
};

bool compareByArrival(Process a, Process b)
{
    return a.arrivalTime < b.arrivalTime;
}

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n);
    for (int i = 0; i < n; i++)
    {
        processes[i].pid = i + 1;
        cout << "Enter arrival time for Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime;
        cout << "Enter burst time for Process " << i + 1 << ": ";
        cin >> processes[i].burstTime;
    }

    sort(processes.begin(), processes.end(), compareByArrival);

    int currentTime = 0;
    float totalWT = 0, totalTAT = 0;
    string ganttChart = "";
    vector<int> ganttTime;
    ganttTime.push_back(currentTime);

    for (int i = 0; i < n; i++)
    {
        Process &p = processes[i];

        if (currentTime < p.arrivalTime)
        {
            ganttChart += " | Idle";
            currentTime = p.arrivalTime;
            ganttTime.push_back(currentTime);
        }

        ganttChart += " | P" + to_string(p.pid);
        p.completionTime = currentTime + p.burstTime;
        p.turnaroundTime = p.completionTime - p.arrivalTime;
        p.waitingTime = p.turnaroundTime - p.burstTime;

        currentTime = p.completionTime;
        ganttTime.push_back(currentTime);

        totalWT += p.waitingTime;
        totalTAT += p.turnaroundTime;
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
