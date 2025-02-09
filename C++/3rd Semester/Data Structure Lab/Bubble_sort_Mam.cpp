#include <iostream>
using namespace std;
int main()
{
    int ar[10], sz, tmp;
    cout << " Enter the size of Array: ";
    cin >> sz;
    cout << " Enter the Elements: " << endl;
    for (int i = 0; i < sz; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < sz-1; i++)
    {
        for (int j = 0; j < sz-i-1; j++)
        {
            if (ar[j] > ar[j+1])
            {
                tmp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = tmp;
            }
        }
    }
    cout << "Sorted Array:" << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << ar[i] << endl;
    }
}