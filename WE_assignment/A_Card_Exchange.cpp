#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
#define vi vector<int>
using namespace std;

void solve(){
    
    int n, k, ci;
    cin >> n >> k;
    // vi c(n + 1);
    unordered_map<int, int> freq;
    for(int i = 1; i <= n; ++i){
        cin >> ci;
        freq[ci]++;
    }
    for(auto&it: freq){
        if(it.second >= k){
            cout << k - 1 << "\n";
            return;
        }
    }
    cout << n << "\n";


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