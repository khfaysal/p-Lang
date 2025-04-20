#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter the Size of the Array: ";
    cin >> size;
    int ar[size];
    cout << "Enter the Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    int target;
    cout << "Enter the Target: ";
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
        cout << "Target found at index " << index+1 << endl; //FOR EXACT POSITION
    }
    else
    {
        cout << "Target not found." << endl;
    }

    return 0;
}
