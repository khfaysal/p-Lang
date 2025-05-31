#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int size;
    cin >> size;
    cin.ignore();
    vector<string> arr(size);

    for (int i = 0; i < size; i++)
    {
        getline(cin, arr[i]); // Read the whole line including spaces
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i].length() > 10)
        {
            cout << arr[i][0] << arr[i].length() - 2 << arr[i][arr[i].length() - 1] << endl;
        }
        else
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}
