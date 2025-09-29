#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of names: ";
    cin >> size;
    cin.ignore(); // [space count korbe na, next line deowar sathe sathei]

    char names[size][50];

    cout << "Enter the names:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin.getline(names[i], 50); // [Read each name, allowing spaces]
    }         //[space count korbe, as a charecter space ke input nibe]

    char target[50];
    cout << "Enter the target name: ";
    cin.getline(target, 50);

    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(names[i], target) == 0)
        {
            found = true;
            cout << "Target name found at Position " << i+1 << " : " << names[i] << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "Target name not found." << endl;
    }
    return 0;
}
