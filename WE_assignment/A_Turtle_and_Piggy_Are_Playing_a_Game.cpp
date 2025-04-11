#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll l, r, steps = 0;
    cin >> l >> r;
    while(r > 1){
        r /= 2;
        ++steps;
    }
    cout << steps << "\n";


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