
#include <bits/stdc++.h>
using namespace std;

long long knapsack(long long i, long long max_w, vector<long long>& weights, vector<long long>& values, vector<vector<long long>>& dp) {
    // Base case: No remaining weight capacity
    if (max_w == 0) return dp[i][0] = 0;
    
    // Base case: If we are at the first item (i == 0)
    if (i == 0) {
        if (weights[0] <= max_w) return dp[i][max_w] =values[0]; // Can take the item
        return 0;  // Cannot take the item
    }

    // Return cached result if already computed
    if (dp[i][max_w] != -1) return dp[i][max_w];

    // Option 1: Do not take the current item
    long long notTake = knapsack(i - 1, max_w, weights, values, dp);

    // Option 2: Take the current item (if the weight allows)
    long long take = INT_MIN;
    if (weights[i] <= max_w) {
        take = values[i] + knapsack(i - 1, max_w - weights[i], weights, values, dp);
    }

    // Memoize and return the maximum value
    return dp[i][max_w] = max(take, notTake);
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    // Input the number of items and the maximum weight capacity
    long long n, w;
    cin >> n >> w;

    vector<long long> weights(n), values(n);
    for (long long i = 0; i < n; i++) {
        cin >> weights[i] >> values[i];
    }

    // Initialize dp array with -1 for memoization
    vector<vector<long long>> dp(n, vector<long long>(w + 1, 0));

    for(long long max_w = 0; max_w <= w; max_w++){
        if(weights[0] <= max_w){

            dp[0][max_w] = values[0];
        }
    }

    for(long long i = 0; i < n; i++){
        dp[i][0] = 0;
    }

    for(long long i = 1; i < n; i++){
        for(long long max_w = 1; max_w <= w; max_w ++){
            long long notTake = dp[i - 1][max_w];
            long long take = INT_MIN;
            if(weights[i] <= max_w){
                take = values[i] + dp[i - 1][max_w - weights[i]];
            }
            dp[i][max_w] = max(notTake, take);
        }
    }
    cout << dp[n - 1][w] << endl;


    return 0;
}
