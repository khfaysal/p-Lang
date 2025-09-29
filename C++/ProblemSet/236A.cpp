#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string name;
    cin >> name;

    set<char> distinct(name.begin(), name.end());
    int len = distinct.size();
    if (len % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}