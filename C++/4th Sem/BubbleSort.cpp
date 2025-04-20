#include <iostream>
using namespace std;

int main()
{
    int size, tmp;
    cout << "Enter the size of Array: ";
    cin >> size;
    int ar[size];
    cout << "Enter the Elements: ";
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
                tmp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = tmp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
