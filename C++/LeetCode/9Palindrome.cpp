#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string s2 = string(s.rbegin(), s.rend());
    if (s == s2)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}