#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

vector<vector<long long>> dp(1e6 + 1, vector<long long>(2, 0));
int main(){
  
    // ios_base::sync_with_stdio(0);cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        dp[1][0] = 1; dp[1][1] = 1;
        for(int i = 1; i <= n - 1; i++){
            dp[i + 1][0] = (2LL * dp[i][0] + dp[i][1]) % MOD; 
            dp[i + 1][1] = (4LL * dp[i][1] + dp[i][0]) % MOD;
        }
       
        cout << (dp[n][0] + dp[n][1]) % MOD << endl;
    }
    return 0;
}