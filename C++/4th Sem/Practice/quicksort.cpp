#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low]; // Choosing the first element as the pivot
    int i = low + 1;      // Start from the second element
    int j = high;         // Start from the last element

    while (i <= j)
    {
        while (i <= j && arr[i] <= pivot)
        {
            i++; // Move right if element is smaller or equal to pivot
        }
        while (i <= j && arr[j] > pivot)
        {
            j--; // Move left if element is greater than pivot
        }
        if (i < j)
        {
            swap(arr[i], arr[j]); // Swap elements on the wrong side
        }
    }

    swap(arr[low], arr[j]); // Place pivot in correct position
    return j;               // Return the pivot index
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high); // Partitioning index
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted Array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}
