#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p;
    int a = 4;
    p = &a;

    *p = 1000;
    cout << "The Valu Of a :" << a << endl;
    cout << "The Valu Of p :" << p << endl;
    cout << "The value of *p : " << *p << endl;

    return 0;
}