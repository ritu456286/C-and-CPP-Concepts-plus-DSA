#include <iostream>
#include <vector>

int knapsack(std::vector<int>& weights, std::vector<int>& values, int W, int n) {
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(W + 1, 0));

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                dp[i][w] = std::max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}

int main() {
    std::vector<int> weights = {1,3,4,6};
    std::vector<int> values = {20,30,10,50};
    int W = 10;
    int n = weights.size();

    int max_value = knapsack(weights, values, W, n);
    std::cout << "Maximum value: " << max_value << std::endl;

    return 0;
}
