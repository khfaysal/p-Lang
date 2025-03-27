#include <iostream>
using namespace std;

void quicksort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(arr, low, high);
        quicksort(arr, low, pivot_index - 1);
        quicksort(arr, pivot_index + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int main()
{
    int n;
    cout << "Inter the size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
