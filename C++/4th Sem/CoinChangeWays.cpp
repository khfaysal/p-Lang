#include <iostream>

using namespace std;

int coinChangeWays(int coins[], int n, int amount) {
    int dp[n + 1][amount + 1] = {0};
    
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }
    
    for (int j = 1; j <= amount; j++) {
        dp[0][j] = 0;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= amount; j++) {
            if (coins[i - 1] <= j) {
                dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    
    return dp[n][amount];
}

int main() {
    int n, amount;
    cout << "Enter the number of coins: ";
    cin >> n;
    int coins[n];
    cout << "Enter the coin values: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    cout << "Enter the total amount: ";
    cin >> amount;
    
    cout << "Number of ways to make change: " << coinChangeWays(coins, n, amount) << endl;
    
    return 0;
}
