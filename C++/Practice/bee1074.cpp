#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, value;
    cin >> N;
    vector<string> results;

    for (int i = 0; i < N; i++)
    {
        cin >> value;
        if (value == 0)
        {
            results.push_back("NULL");
        }
        else if (value > 0 && ((value % 2) == 0))
        {
            results.push_back("EVEN POSITIVE");
        }
        else if (value > 0 && ((value % 2) != 0))
        {
            results.push_back("ODD POSITIVE");
        }
        else if (value < 0 && ((value % 2) == 0))
        {
            results.push_back("EVEN NEGATIVE");
        }
        else if (value < 0 && ((value % 2) != 0))
        {
            results.push_back("ODD NEGATIVE");
        }
    }

    // Print all results at the end
    for (const string &result : results)
    {
        cout << result << endl;
    }

    return 0;
}