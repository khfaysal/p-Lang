#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) 
        return false; // Numbers less than or equal to 1 are not prime

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false; // If divisible by any number other than 1 and itself, it's not prime
    }

    return true; // Number is prime
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
