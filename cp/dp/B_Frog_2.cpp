#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    // Initialize dp array with large values to find the minimum costs
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;  // Starting position cost is 0

    // Traverse each stone and calculate the minimum cost for each position
    for (int i = 1; i < n; i++) {
        // Calculate the minimum cost of reaching the i-th stone
        for (int j = 1; j <= k && i - j >= 0; j++) {
            dp[i] = min(dp[i], abs(heights[i] - heights[i - j]) + dp[i - j]);
        }
    }

    // Output the minimum cost to reach the last stone
    cout << dp[n - 1] << endl;

    return 0;
}
