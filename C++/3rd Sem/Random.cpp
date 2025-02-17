#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the Number of names you want to take: ";
    cin >> size;
    cin.ignore();
    char nm[size][50];
    cout << "Enter names: ";
    for (int i = 0; i < size; i++)
    {
        cin.getline(nm[i], 50);
    }
    char tg[50];
    bool found = false;
    cout << "Enter the Target name: ";
    cin.getline(tg, 50);

    for (int i = 0; i < size; i++)
    {
        if (strcmp(nm[i], tg) == 0)
        {
            found = true;
            cout << "Name found at index : " << i << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "Name Not Found.";
    }
    return 0;
}

for (size_t i = 0; i < count; i++)
{
    /* code */
}
#include<bits/stdc++.h>
using namespace std;

int main(){
  
  return 0;
}