#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0LL; i < n; i++){
        cin >> a[i];
    }
    ll i = 0, j = n - 1;
    ll count_i = (a[i] == 2 ? 1 : 0);
    ll count_j = (a[j] == 2 ? 1 : 0);
    // ll ans_i = a[i], ans_j = a[j];
    while(i < j){
       if(count_i < count_j){
            ++i;
            if(j != i) count_i += (a[i] == 2 ? 1 : 0);
       }else if(count_j < count_i){
            --j;
            if(j != i) count_j += (a[j] == 2 ? 1 : 0);
       }else{
            --j;
            if(j != i) count_j += (a[j] == 2 ? 1 : 0);
       }
    }

    ll ans = (count_i == count_j ? i + 1 : -1);
    cout << ans << "\n";
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