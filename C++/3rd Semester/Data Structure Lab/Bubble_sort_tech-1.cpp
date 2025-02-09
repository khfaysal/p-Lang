#include <iostream>
using namespace std;
int main()
{
    int ar[10], sz, tmp;
    cout << " Enter the size of Array: ";
    cin >> sz;
    cout << " Enter the Elements: "<<endl;
    for (int i = 0; i < sz; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (ar[i] > ar[j])
            {
                tmp = ar[i];
                ar[i] = ar[j];
                ar[j] = tmp;
            }
        }
    }
    cout << "Sorted Array:"  << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << ar[i]<<endl;
    }
}