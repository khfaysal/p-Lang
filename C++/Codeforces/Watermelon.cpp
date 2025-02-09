#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a <= 100 && a >= 0)
    {
        if (a % 2 == 0 && a > 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else{
        cout<<"Invalide Weight."<<endl;
    }
    return 0;
}