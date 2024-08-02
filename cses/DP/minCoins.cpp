#include <bits/stdc++.h>
#define MOD 1000000007
#define PB push_back 
#define MP make_pair
#define ACC accumulate
#define MAXH priority_queue<int>
#define MINH priority_queue<int, vector<int>, greater<int>>
#define MAXPH priorit_queue<pair<int, int>>
#define MINPH priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>

using namespace std;

typedef long long ll;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef pair<char, char> pcc;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<pss> vpss;
typedef vector<pcc> vpcc;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<vc> vvc;
typedef vector<vs> vvs;

typedef map<int, int> mpii;
typedef map<ll, ll> mpll;
typedef map<string, string> mpss;
typedef map<string, int> mpsi;
typedef map<string, ll> mpsll;
typedef map<char, int> mpci;
typedef map<char, ll> mpcll;
typedef map<int, vpii> mpivpii;
typedef map<int, int> mpii;

typedef unordered_map<int, vpii> umpivpii;
typedef unordered_map<int, int> umpii;
typedef unordered_map<ll, ll> umpll;
typedef unordered_map<string, int> umpsi;
typedef unordered_map<char, int> umpci;
typedef unordered_map<char, ll> umpcll;
typedef unordered_map<string, ll> umpsll;
typedef unordered_map<int, vi> umpivi;

// int solve(int i, int amount, vi& coins, vvi& dp){
//     if(i == 0) {
//         if(amount % coins[i] == 0){
//             return dp[i][amount] = amount / coins[i];
//         }else{
//             return 1e9;
//         }
//     }
//     if(amount < 0) return 1e9;
//     if(amount == 0) return dp[i][0] = 0;
//     if(dp[i][amount] != -1) return dp[i][amount];
//     int take= INT_MAX;
//     if(coins[i] <= amount){
//         take = 1 + solve(i, amount - coins[i], coins, dp);
//     }
//     int notTake = solve(i - 1, amount, coins, dp);
//     return dp[i][amount] = min(take, notTake);
// }
int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n, amount;
    cin >> n >> amount;
    vi coins(n);
    for(int i = 0; i < n; ++i){
        cin >> coins[i];
    }
    // vvi dp(n + 1, vi(amount + 1, -1));
    ll dp[n + 1][amount + 1] = { {1000006} };


    for(int i = 0; i < n; ++i){
        for(int j = 0; j <= amount; ++j){
            //base case
            if(i == 0) {
                if(j % coins[i] == 0){
                    dp[i][j] = j / coins[i];
                    
                }else{
                    dp[i][j] = 1000006;
                    // break;
                }
                continue;
            }

            if(j == 0){
                dp[i][0] = 0;
                continue;
            }

            int take= INT_MAX;
            if(coins[i] <= j){
                take = 1 + dp[i][j - coins[i]];
            }
            int notTake = dp[i - 1][j];
            dp[i][j] = min(take, notTake);
        }            
    }

    int val = dp[n - 1][amount];

    if(val >= 1000006) val = -1;
    cout << val << endl;


    return 0;
}