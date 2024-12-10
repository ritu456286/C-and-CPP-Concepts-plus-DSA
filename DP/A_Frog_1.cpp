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


//top down approach
int minCost(int i, vector<int>& heights, vector<int>& dp){
    if(i < 0) return INT_MAX;
    if (i == 0) return dp[0] = 0;
    if(dp[i] != -1) return dp[i];
    int oneStep = abs(heights[i] - heights[i - 1]) + minCost(i - 1, heights, dp);
    int twoStep = INT_MAX;
    if(i >= 2) twoStep = abs(heights[i] - heights[i - 2]) + minCost(i - 2, heights, dp);
    return dp[i] = min(oneStep, twoStep);
}


int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int n;
    cin >> n;
    vector<int> heights(n);
    vector<int> dp(n, 0);
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }

    //bottom up approach
    for(int i = 1; i < n; i++){
        int oneStep = abs(heights[i - 1] - heights[i]) + dp[i - 1];
        int twoStep = INT_MAX;
        if(i >= 2){
            twoStep = abs(heights[i - 2] - heights[i]) + dp[i - 2];
        }
        dp[i] = min(oneStep, twoStep);
    }

    cout << dp[n - 1] << endl;
   

    return 0;
}