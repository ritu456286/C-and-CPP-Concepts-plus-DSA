#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll l, r;
    cin >> l >> r;
    //find two number between it

    //lcm max = r
    //l ka multiple is second number
    if(r < 2 * l) {
        cout << -1 << " " << -1 << "\n";
        return;
    }
    cout << l << " " << 2 * l << "\n";
    return;

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