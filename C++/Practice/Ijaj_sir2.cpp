#include <iostream>
using namespace std;

void searchAndUpdate(int arr[], int size, int target)
{
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            arr[i] = -1;
            found = true;
        }
    }

    if (found)
        cout << "Value " << target << " found and updated." << endl;
    else
        cout << "Value " << target << " not found." << endl;
}

void displayArray(int arr[], int size)
{
    cout << "Updated array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 5, 4, 10, 67, 45, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter a value to search and update: ";
    cin >> target;

    searchAndUpdate(arr, size, target);
    displayArray(arr, size);

    return 0;
}