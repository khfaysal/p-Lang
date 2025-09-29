#include <iostream>
using namespace std;

int main()
{

    int ar[99];

    int n, pos;

    cout << "Enter the size of the array: ";

    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
    }

    cout << "Enter the position of the element to be deleted: ";

    cin >> pos;

    if (pos < 1 || pos > n)
    {

        cout << "Incalid Position" << endl;

        return 1;
    }

    for (int i = pos - 1; i < n - 1; i++)
    {

        ar[i] = ar[i + 1];
    }

    n--;

    cout << "New Array: " << endl;

    for (int i = 0; i < n; i++)
    {

        cout << ar[i] << endl;
    }

    cout << endl;
    return 0;
}