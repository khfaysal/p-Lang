
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    vector<int> arrivalTimes(n), burstTimes(n);
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter arrival time and burst time for Process " << i << ": ";
        cin >> arrivalTimes[i] >> burstTimes[i];
    }

    cout << "Show Burst times:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": " << burstTimes[i] << "\n";
    }

    return 0;
}