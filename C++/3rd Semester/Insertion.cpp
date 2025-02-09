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
    int pos, val;
    cout << "Enter the Position to Insert: ";
    cin >> pos;
    cout << "Enter the value : ";
    cin >> val;
    for (int i = size; i > pos; i--)
    {
        ar[i] = ar[i-1];
    }
    ar[pos] = val;
    size++;

    for (int i = 0; i < size; i++)
    {
        cout << ar[i]<<' ';
    }
    return 0;
}