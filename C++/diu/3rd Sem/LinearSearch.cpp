#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100], n;
    cout << "Enter the length of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    cout << "Enter the key: ";
    int j, count = 0;
    cin >> j;
    for (int i = 0; i < n; i++)
    {

        if (ar[i] == j)
        {
            cout << "Element found at index : " << i << "\n";
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Not Found";
    }

    return 0;
}
