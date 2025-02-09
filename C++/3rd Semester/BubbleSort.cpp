#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100];
    int size;
    cout << "Enter the size of an Array: ";
    cin >> size;
    cout << "Enter the elements respectively: ";
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << ' ';
    }
    

    return 0;
}