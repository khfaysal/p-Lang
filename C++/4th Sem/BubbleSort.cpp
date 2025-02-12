#include <iostream>
using namespace std;
int main()
{
    int ar[10], size, tmp;
    cout << " Enter the size of Array: ";
    cin >> size;
    cout << " Enter the Elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (ar[j] > ar[j+1])
            {
                tmp = ar[i];
                ar[i] = ar[j];
                ar[j] = tmp;
            }
        }
    }
    cout << " Sorted Array : " ;
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
}