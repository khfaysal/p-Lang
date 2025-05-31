#include <iostream>
#include <iomanip> // for setw
using namespace std;

int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        // Print leading spaces to center the row
        for (int space = 0; space < rows - i - 1; space++)
        {
            cout << "  "; // two spaces for better alignment
        }

        // Print Pascal's triangle numbers
        for (int j = 0; j <= i; j++)    // [for i = 1, j=0 and j=1...so on]
        {                                        
            cout << setw(4) << combination(i, j); // width for spacing
        }
        cout << endl;
    }

    return 0;
}
