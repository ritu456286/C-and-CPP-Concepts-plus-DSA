#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
#define print(a) cout << a << endl;
using namespace std;

inline int lg(int x) { return 31 - __builtin_clz(x); }
inline int lg(long x) { return 31 - __builtin_clzl(x); }
inline int lg(long long x) { return 63 - __builtin_clzll(x); }

void solve(){
    
    long long n, a;
    cin >> n;long long swaps = 0;
   map<long long, long long> freq;
    for(int i = 1; i<=n; ++i){
        cin >> a;
        freq[a]++;
    }
    long long max_freq = 0;
    for(auto&it: freq){
        max_freq= max(max_freq, it.second);
    }
    swaps = n - max_freq;
    if(max_freq >= swaps){
        cout << (swaps ? swaps + 1: 0)<< "\n";
        return;
    }

    long long copies = ceil(log2(((double)(swaps) / (double)(max_freq) + 1)));

    cout << copies + swaps << "\n";


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