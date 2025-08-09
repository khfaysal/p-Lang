
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Number of processes: ";
    cin >> n;
    int at[100], bt[100], rt[100], ct[100], tat[100], wt[100], done[100] = {0};
    for (int i = 0; i < n; i++)
    {
        cout << "Arrival time P" << i + 1 << ": ";
        cin >> at[i];
        cout << "Burst time P" << i + 1 << ": ";
        cin >> bt[i];
        rt[i] = bt[i];
    }
    int completed = 0, time = 0, prev = -1, gc[200], gc_pid[200], gc_len = 0;
    float sumWT = 0, sumTAT = 0;
    while (completed < n)
    {
        int idx = -1, minRT = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (!done[i] && at[i] <= time && rt[i] < minRT && rt[i] > 0)
            {
                minRT = rt[i];
                idx = i;
            }
        }
        if (idx != -1)
        {
            if (prev != idx)
            {
                gc[gc_len] = time;
                gc_pid[gc_len++] = idx;
                prev = idx;
            }
            rt[idx]--;
            time++;
            if (rt[idx] == 0)
            {
                ct[idx] = time;
                tat[idx] = ct[idx] - at[idx];
                wt[idx] = tat[idx] - bt[idx];
                done[idx] = 1;
                completed++;
                sumWT += wt[idx];
                sumTAT += tat[idx];
            }
        }
        else
        {
            if (prev != -2)
            {
                gc[gc_len] = time;
                gc_pid[gc_len++] = -1;
                prev = -2;
            }
            time++;
        }
    }
    gc[gc_len] = time;
    cout << "\nP\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++)
        cout << i + 1 << "\t" << at[i] << "\t" << bt[i] << "\t" << ct[i] << "\t" << tat[i] << "\t" << wt[i] << "\n";
    cout << "Avg WT: " << sumWT / n << "\nAvg TAT: " << sumTAT / n << endl;
    // Gantt Chart
    cout << "\nGantt Chart:\n|";
    for (int i = 0; i < gc_len; i++)
        if (gc_pid[i] == -1)
            cout << " Idle |";
        else
            cout << " P" << gc_pid[i] + 1 << " |";
    cout << "\n"
         << gc[0] << "\t";
    for (int i = 1; i <= gc_len; i++)
        cout << gc[i] << "\t";
    cout << endl;
    return 0;
}
