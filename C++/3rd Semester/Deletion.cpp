#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100], size;
    cout << "Enter the size of an Array: ";
    cin >> size;
    cout << "Enter the array respectively: ";
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    int pos;
    cout << "Enter the Position to delete: ";
    cin >> pos;
    for (int i = pos; i < size; i++)
    {
        ar[i] = ar[i + 1];
    }

    for (int i = 0; i < size - 1; i++)
    {
        cout << ar[i];
    }
    return 0;
}
