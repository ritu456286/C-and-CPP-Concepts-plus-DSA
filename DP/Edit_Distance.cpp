#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

int helper(int i, int j, vvi& dp, string s, string t) {
    if (i < 0 && j < 0) return 0;
    if (i < 0) return dp[i + 1][j + 1] = j + 1;
    if (j < 0) return dp[i + 1][j + 1] = i + 1;
    if (dp[i + 1][j + 1] != -1) return dp[i + 1][j + 1];
    if (s[i] == t[j]) {
        return dp[i + 1][j + 1] = helper(i - 1, j - 1, dp, s, t);
    }
    int add = helper(i, j - 1, dp, s, t) + 1;
    int remove = helper(i - 1, j, dp, s, t) + 1;
    int replace = helper(i - 1, j - 1, dp, s, t) + 1;
    
    return dp[i + 1][j + 1] = min({add, remove, replace});
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    vvi dp(n + 1, vi(m + 1, -1));

    dp[0][0] = 0;
    for(int i = 0; i < n; ++i){
        dp[i + 1][0] = i + 1;
    }
    for(int j = 0; j < m; ++j){
        dp[0][j + 1] = j + 1;
    }
    
    for(int i = 0; i <= n; ++i){
        for(int j = 0; j <= m; ++j){
            if(s[i] == t[j]){
                dp[i + 1][j + 1] = dp[i][j];
                continue;
            }
            int add = 1 + dp[i][]
        }
    }

    int ans = helper(n - 1, m - 1, dp, s, t);
    cout << ans << endl;



    return 0;
}
