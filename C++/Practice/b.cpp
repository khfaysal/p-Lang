#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    float grade, tgrade = 0.0;
    int credit, tCredit = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> grade >> credit;
        tgrade += grade * credit;
        tCredit += credit;
    }
    float cgpa = tgrade / tCredit;
    cout << fixed;
    cout.precision(2);
    cout << cgpa << endl;

    return 0;
}
