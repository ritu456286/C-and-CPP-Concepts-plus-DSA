#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int median_index = (n / 2) + (n % 2);
    int next_index = median_index + 1;
    ll ans = 1;
    while(next_index <= n && a[next_index] == a[next_index - 1]){
        ++ans;
        ++next_index;
    }
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