#include <bits/stdc++.h>
using namespace std;

//top down approach
int maxHappiness(int i, int prev_j, vector<vector<int>>& scores, vector<vector<int>>& dp){
    if(i < 0){
        return 0;
    }
    if(dp[i][prev_j] != -1) return dp[i][prev_j];
    int score = 0;
    for(int j = 0; j < 3; j++){
        if(prev_j != j){
            score = max(scores[i][j] + maxHappiness(i - 1, j, scores, dp), score);
        }
    }
    return dp[i][prev_j] = score;
}


int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> scores(n, vector<int>(3));
    for(int i = 0; i < n; i++){
        cin >> scores[i][0] >> scores[i][1] >> scores[i][2];
    }
    vector<vector<int>> dp(n, vector<int>(3, -1));

    for(int j = 0; j < 3; j++) dp[0][j] = scores[0][j];
    for(int i = 1; i < n; i++){
        for(int j = 0; j < 3; j++){
            dp[i][j] = scores[i][j] + max(dp[i - 1][(j + 1) % 3], dp[i - 1][(j + 2) % 3]);
        }
    }
    int result = *max_element(dp[n - 1].begin(), dp[n - 1].end());
    cout << result << endl;
    
    return 0;
}