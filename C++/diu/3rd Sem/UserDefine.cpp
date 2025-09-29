#include <bits/stdc++.h>
using namespace std;
void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int bsearch(int ar[], int size, int target)
{

    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (ar[mid] == target)
        {
            return mid;
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
    return -1;
}

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
    sort(ar, size); // SORT
    for (int i = 0; i < size; i++)
    {
        cout << ar[i]<< ' ';
    }
    cout<<endl;

    int target;
    cout << "Enter the Target: ";
    cin >> target;

    int result = bsearch(ar, size, target); // FUNCTION CALL

    if (result != -1)
    {
        cout << "Target found at index " << result+1 << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }

    return 0;
}
