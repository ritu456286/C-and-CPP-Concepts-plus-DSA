#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vl vector<long>
#define vll vector<long long>
#define print(a) cout << a << endl

using namespace std;

// Custom hash function for pair<ll, ll>
struct pair_hash {
size_t operator()(const pair<ll,
ll>& p) const {
auto h1 = hash<ll>()(p.first);
auto h2 = hash<ll>()(p.second);
// Combine the two hash values.
return h1^(h2+0x9e3779b97f4a7c15ULL + (h1 << 6)+(h1 >> 2));
}
};
//use unordered_set<pair<ll, ll>, pair_hash> st; or unordered_map
inline int lg(int x) { return 31 - __builtin_clz(x); }
inline int lg(long x) { return 31 - __builtin_clzl(x); }
inline int lg(long long x) { return 63 - __builtin_clzll(x); }

void solve(){
    auto has_same_digits = [&](const int& y) -> bool {
        string s = to_string(y);
        int freq[10] = {0};
        for (char c : s) {
            freq[c - '0']++;
            if (freq[c - '0'] > 1)
                return true;
        }
        return false;
    };
    int y;
    cin >> y;
    int new_y = y + 1;
    while(has_same_digits(new_y++)){}
    print(new_y-1);

}
int main(){
  
    ios_base::sync_with_stdio(0);cin.tie(NULL);

    
        solve();
    
    return 0;
}