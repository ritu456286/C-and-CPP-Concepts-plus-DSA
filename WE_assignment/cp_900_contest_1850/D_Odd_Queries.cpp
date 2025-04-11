#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n + 1);
    vector<ll> prefix(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        prefix[i] = a[i] + prefix[i - 1];
    }
    for(int qq = 1; qq <= q; ++qq){
        ll l, r, k;
        cin >> l >> r >> k;
        ll sumLR = prefix[r] - prefix[l - 1];
        ll total = prefix[n];
        ll now_total = total - sumLR + (r - l + 1) * k;
        if(now_total & 1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
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