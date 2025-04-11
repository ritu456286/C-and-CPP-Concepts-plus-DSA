#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<ll> a(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    ll output = a[n - 1];
    for(int i = n - 2; i >= 1; --i){
        output -= a[i];
    }
    cout << a[n] - output << "\n";


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