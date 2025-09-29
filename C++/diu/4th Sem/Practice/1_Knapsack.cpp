#include <iostream>
using namespace std;

// Function to solve 0/1 Knapsack Problem
int knapsack(int W, int weight[], int value[], int n) {
    int dp[n + 1][W + 1];

    // Building table dp[][] in bottom-up manner
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weight[i - 1] <= w)
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][W]; // The last cell contains the answer
}

int main() {
    int n; // Number of items
    int W; // Maximum weight of knapsack

    cout << "Enter number of items: ";
    cin >> n;

    int weight[n], value[n];

    cout << "Enter weights of items:\n";
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    cout << "Enter values of items:\n";
    for (int i = 0; i < n; i++)
        cin >> value[i];

    cout << "Enter maximum capacity of knapsack: ";
    cin >> W;

    int maxProfit = knapsack(W, weight, value, n);

    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}
