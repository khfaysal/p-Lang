#include <iostream>
using namespace std;

void sum (int &a, int &b)
{
    a = 20;
    b = 100;
    
}

int main()
{
    int x, y;
    x = 10;
    y = 7;

    sum(x, y);
    cout << x << endl;
    cout << y <<endl;
   
    return 0;
}
