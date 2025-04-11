#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll n;
    cin >> n;
    // ll i = 1;
    // if(n == 1){
    //     cout << 1 << "\n";
    //     return;
    // }
    
    // while(i  <= n / 2){
    //     i = i * 2;
    // }
    // cout << i << "\n";
    cout << (1LL << (int)log2(n)) << "\n";

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