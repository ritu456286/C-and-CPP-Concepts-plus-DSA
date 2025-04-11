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


struct pair_hash {
size_t operator()(const pair<ll, ll>& p) const {
auto h1 = hash<ll>()(p.first);
auto h2 = hash<ll>()(p.second);
// Combine the two hash values.
return h1 ^ (h2 + 0x9e3779b97f4a7c15ULL + (h1 << 6) + (h1 >> 2));
}};
//use unordered_set<pair<ll, ll>, pair_hash> st; or unordered_map
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


void solve(){
    
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<int, int> mp;
    for(auto&ch: s){
        mp[ch]++;
    }
    int new_len = n - k;
    if((new_len & 1) == 0){
        //even length
        int left = n - k;
        for(auto&it: mp){
            left -= ((it.second & 1) ? (it.second - 1): it.second);
        }
        if(left <= 0){
            print("YES");
        }else{
            print("NO");
        }
    }else{
        int left = n - k;
        bool take_odd = true;
        for(auto&it: mp){
            if(it.second & 1){
                if(take_odd){
                    left -= it.second;
                    take_odd = false;
                }else{
                    left -= (it.second - 1);
                }
            }else{
                left -= it.second;
            }
        }
        if(left <= 0){
            print("YES");
        }else{
            print("NO");
        }        
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