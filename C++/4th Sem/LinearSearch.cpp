#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int ar[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    cout << "Enter the key: ";
    int key, count = 0;
    cin >> key;
    for (int i = 0; i < n; i++)
    {

        if (ar[i] == key)
        {
            cout << "The Key Element " << key << " found at index " << i << "\n";
            count++;
        }
    }
    if (count == 0)
    {
        cout << "Not Found";
    }

    return 0;
}
