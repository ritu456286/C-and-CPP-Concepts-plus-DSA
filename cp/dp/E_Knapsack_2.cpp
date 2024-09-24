
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0); 
//     cin.tie(NULL);

//     long long n, w;
//     cin >> n >> w;

//     vector<long long> weights(n), values(n);
//     for (long long i = 0; i < n; i++) {
//         cin >> weights[i] >> values[i];
//     }

//     vector<long long> curr_dp(w + 1, 0);
//     vector<long long> prev_dp(w + 1, 0);
//     for(long long max_w = 0; max_w <= w; max_w++){
//         if(weights[0] <= max_w){

//             curr_dp[max_w] = values[0];
//         }
//     }
//     prev_dp = curr_dp;
//     for(long long i = 1; i < n; i++){
//         for(long long max_w = 1; max_w <= w; max_w ++){
//             long long notTake =  prev_dp[max_w];
//             long long take = INT_MIN;
//             if(weights[i] <= max_w){
//                 take = values[i] + prev_dp[max_w - weights[i]];
//             }
//            curr_dp[max_w] = max(notTake, take);
//         }
//         prev_dp = curr_dp;
//     }
//     cout << curr_dp[w] << endl;


//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

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

    // Initialize a 1D dp array to store the maximum value at each weight capacity
    vector<long long> dp(w + 1, 0);

    // Process each item one by one
    for (long long i = 0; i < n; i++) {
        // Traverse the dp array in reverse order to avoid overwriting previous values
        for (long long curr_w = w; curr_w >= weights[i]; curr_w--) {
            dp[curr_w] = max(dp[curr_w], dp[curr_w - weights[i]] + values[i]);
        }
    }

    // The result is the maximum value we can get with the full weight capacity `w`
    cout << dp[w] << endl;

    return 0;
}
