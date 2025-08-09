

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number of processes: ";
    cin >> n;
    int at[100], bt[100], ct[100], tat[100], wt[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Arrival time P" << i + 1 << ": ";
        cin >> at[i];
        cout << "Burst time P" << i + 1 << ": ";
        cin >> bt[i];
    }
    // FCFS assumes sorted by arrival
    int time = 0;
    float sumWT = 0, sumTAT = 0;
    int start[100];
    for (int i = 0; i < n; i++)
    {
        if (time < at[i])
            time = at[i];
        start[i] = time;
        ct[i] = time + bt[i];
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        time = ct[i];
        sumWT += wt[i];
        sumTAT += tat[i];
    }
    cout << "\nP\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++)
        cout << i + 1 << "\t" << at[i] << "\t" << bt[i] << "\t" << ct[i] << "\t" << tat[i] << "\t" << wt[i] << "\n";
    cout << "Avg WT: " << sumWT / n << "\nAvg TAT: " << sumTAT / n << endl;

    // Gantt Chart
    cout << "\nGantt Chart:\n|";
    for (int i = 0; i < n; i++)
        cout << " P" << i + 1 << " |";
    cout << "\n";
    cout << start[0] << "\t";
    for (int i = 0; i < n; i++)
        cout << ct[i] << "\t";
    cout << endl;
    return 0;
}
