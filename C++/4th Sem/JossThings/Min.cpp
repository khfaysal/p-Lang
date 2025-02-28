#include <bits/stdc++.h>
using namespace std;

int findmin(int arr[], int size)
{
    int i = 0;
    bool flag = true;
    int min;
    while (flag)
    {
        if (i > size)
        {
            break;
        }
        min = arr[i];
        flag = false;
        for (int j = 0; j < size; j++)
        {
            if (min > arr[j])
            {
                flag = true;
                min = arr[j];
            }
        }
        i++;
    }
    return min;
}

int main()
{
    int size;
    cout << "Enter the Size: ";
    cin >> size;
    int arr[size];
    cout << "Enter the Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int minimum = findmin(arr, size);
    cout << "The Minimum Number is :" << minimum << endl;

    return 0;
}