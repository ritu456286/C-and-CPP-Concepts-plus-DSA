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

int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);


    int summ;
    cin >> summ;
    vi dp(summ + 1, -1);
    //memoization
    dp[0] = 1;
    for(int n = 1; n <= summ; ++n){
        int steps = 0;
        for(int i = 1; i <= 6; ++i){
            if(n - i >= 0) steps = (steps + dp[n - i]) % MOD;
        }
        dp[n] = steps % MOD;
    }
    cout << dp[summ] << endl;
    return 0;
}
