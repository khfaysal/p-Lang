#include <iostream>
using namespace std;

int main()
{
    int ar[99];
    int n, pos, value;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    cout << "Enter the position where YOU want to insert the element: ";
    cin >> pos;
    cout << "Enter the value of the element: "<<endl;
    cin >> value;

    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid position" << endl;
        return 1;
    }

    for (int i = n; i >= pos - 1; i--)
    {
        ar[i + 1] = ar[i];
    }
    ar[pos - 1] = value;
    n++;

    cout << "New Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] <<endl;
    }
    cout << endl;

    return 0;
}