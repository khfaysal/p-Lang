#include <iostream>
using namespace std;

int main()
{
    int size, tmp;
    cout << "Enter the size of Array:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    return 0;
}