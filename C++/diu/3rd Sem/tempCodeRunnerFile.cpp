#include <bits/stdc++.h>
using namespace std;

void sw(int &a, int &b)
{
    a = a - b;
    b = a + b;
    a = b - a;
}

int main()

{
    int x, y;
    cout << "Enter X: " << endl;
    cin >> x;
    cout << "Enter Y: " << endl;
    cin >> y;
    sw(x, y);
    cout << x <<' '<< y;

    return 0;
}

