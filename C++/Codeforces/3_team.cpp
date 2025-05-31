#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n][3]; // Use a 2D array to store all inputs

    // Input loop
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int fc = 0; // Final count of rows with more than or equal two 1s.

    for (int i = 0; i < n; i++)
    {
        int count = 0; // Count of 1s in the current row
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
            {
                count += 1;
            }
        }
        // If the row has more than or equal two 1s, increment the final count
        if (count >= 2)
        {
            fc += 1;
        }
    }

    cout << fc << endl;

    return 0;
}