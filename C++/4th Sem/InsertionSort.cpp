#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "enter the size of an array: ";
    cin >> size;
    int arr[size];
    cout << "enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int j = 1; j < size; j++)
    {
        int key = arr[j];
        int i = j - 1;
        while (key < arr[i] && i >= 0)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }

    cout << "Final Array: ";

    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    
    return 0;
}