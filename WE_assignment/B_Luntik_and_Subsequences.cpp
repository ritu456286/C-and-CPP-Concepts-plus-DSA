#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
#define print(a) cout << a << endl

using namespace std;

inline int lg(int x) { return 31 - __builtin_clz(x); }
inline int lg(long x) { return 31 - __builtin_clzl(x); }
inline int lg(long long x) { return 63 - __builtin_clzll(x); }

void solve(){
    
    int n, a;
    cin >> n;
    ll ones = 0LL, zeroes = 0LL;
    for(int i =  1; i <= n; ++i){
        cin >> a;
        if(a == 1) ++ones;
        else if(a == 0) ++zeroes;
    }

    print((ones * (1LL << zeroes)));


}
int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}