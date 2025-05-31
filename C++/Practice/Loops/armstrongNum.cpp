#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int num = 100; num <= 999; num++)
    { // Loop 1
        int sum = 0, temp = num;
        while (temp != 0)
        { // Loop 2
            int digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }
        if (sum == num)
            cout << num << " ";
    }
    return 0;
}

/*An Armstrong number is a number that is equal
  to the sum of its own digits, each raised to
    the power of the number of digits.*/