#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long>>
#define vvll vector<vector<long long>>
#define print(a) cout << a << endl

using namespace std;

const int MAX_VAL=1e5+501;
int is_prime[MAX_VAL];
void initialize_seive(){
for (int i = 0; i < MAX_VAL; i++) {
is_prime[i] = 1;
}
is_prime[0] = is_prime[1] = 0;
for(int i=2; i*i<= MAX_VAL; ++i){
if(is_prime[i]){
for(int j = i*i; j<=MAX_VAL; j+= i){
is_prime[j] = 0;
}}}}
inline int lg(int x) { return 31 - __builtin_clz(x); }
inline int lg(long x) { return 31 - __builtin_clzl(x); }
inline int lg(long long x) { return 63 - __builtin_clzll(x); }


int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    initialize_seive();
    //precompute next prime for each x <= MAX_VAL
    int curr = -1;
    int next_prime[MAX_VAL] = {};
    for(int x = MAX_VAL; x >= 0; --x){
        if(is_prime[x]){
            curr = x;
        }
        next_prime[x] = curr;
    }


    int n, m;
    cin >> n >> m;
    vvi mat(n, vi(m));
    vvi moves(n, vi(m));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> mat[i][j];
        }
    }
    ll min_moves = LLONG_MAX;
    for(int i = 0; i < n; ++i){
        ll row_moves = 0LL;
        for(int j = 0; j < m; ++j){
            row_moves += (next_prime[mat[i][j]] - mat[i][j]);
        }
        min_moves = min(row_moves, min_moves);
    }
    for(int j = 0; j < m; ++j){
        ll col_moves = 0LL;
        for(int i = 0; i < n; ++i){
            col_moves += (next_prime[mat[i][j]] - mat[i][j]);
        }
        min_moves = min(col_moves, min_moves);
    }
    print(min_moves);

    return 0;
}