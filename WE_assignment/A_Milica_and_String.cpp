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
    
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int freq_b = 0;
    for(auto&ch: s){
        if(ch == 'B') freq_b++;
    }
    if(freq_b == k){
        print(0);
    }else if(freq_b < k){
        print(1);
        int count_A = k - freq_b;
        int i = 0;
        for(; i < n; ++i){
            if(s[i] == 'A') --count_A;
            if(count_A <= 0) break;
        }
        print(i + 1 << " " << 'B');
    }else{
        print(1);
        int count_B = freq_b - k;
        int i = 0;
        for(; i < n; ++i){
            if(s[i] == 'B') --count_B;
            if(count_B <= 0) break;
        }
        print(i + 1 << " " << 'A');
    }


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