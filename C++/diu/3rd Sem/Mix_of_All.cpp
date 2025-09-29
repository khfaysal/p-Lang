#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[100], size;
    cout << "Enter the Size of the Array: ";
    cin >> size;
    cout << "Enter the Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    // aPPLy sORTINg

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    // print sorted array
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << ' ';
    }
    cout << endl;

    int target;
    cout << "Enter the Terget: ";
    cin >> target;

    int low = 0;
    int high = size - 1;
    bool found = false;
    int index = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (ar[mid] == target)
        {
            found = true;
            index = mid;
            break;
        }
        else if (ar[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found)
    {
        cout << "Target found at position: " << index << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}