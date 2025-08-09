
#include <iostream>
#include <vector>
#include <iomanip>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    vector<int> at(n), bt(n), ct(n), tat(n), wt(n), done(n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter arrival time for Process " << i + 1 << ": ";
        cin >> at[i];
        cout << "Enter burst time for Process " << i + 1 << ": ";
        cin >> bt[i];
    }
    int completed = 0, t = 0;
    double sumWT = 0, sumTAT = 0;
    string gantt = "";
    vector<int> gtime = {0};
    while (completed < n)
    {
        int idx = -1, minBT = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (!done[i] && at[i] <= t && bt[i] < minBT)
            {
                minBT = bt[i];
                idx = i;
            }
        }
        if (idx == -1)
        {
            t++;
            if (gantt.empty() || gantt.substr(gantt.size() - 5) != "Idle")
                gantt += " | Idle";
            gtime.push_back(t);
            continue;
        }
        ct[idx] = t + bt[idx];
        tat[idx] = ct[idx] - at[idx];
        wt[idx] = tat[idx] - bt[idx];
        sumWT += wt[idx];
        sumTAT += tat[idx];
        done[idx] = 1;
        completed++;
        gantt += " | P" + to_string(idx + 1);
        t = ct[idx];
        gtime.push_back(t);
    }
    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++)
        cout << "P" << i + 1 << "\t" << at[i] << "\t" << bt[i] << "\t" << ct[i] << "\t" << tat[i] << "\t" << wt[i] << "\n";
    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << sumWT / n << "\n";
    cout << "Average Turnaround Time: " << sumTAT / n << "\n";
    cout << "\nGantt Chart:\n"
         << gantt << " |\n";
    for (int x : gtime)
        cout << x << "\t";
    cout << endl;
    return 0;
}
