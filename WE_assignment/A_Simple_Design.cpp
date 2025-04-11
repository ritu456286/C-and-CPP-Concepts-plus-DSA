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
    
    ll x, k;
    cin >> x >> k;
    int sum = 0;
    ll temp = x;
    while(temp){
        sum += temp%10;
        temp /= 10;
    }
    if(sum % k == 0){
        print(x);
        return;

    }
    temp = x;
    ll new_sum = sum;
    while(new_sum % k != 0){
        ++temp;
        new_sum = 0;
        ll temp2 = temp;
        while(temp2){
            new_sum += temp2%10;
            temp2 /= 10;
        }
        if(new_sum % k == 0) break;
    }

    print(temp);


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