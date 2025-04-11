#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i= 0; i < n; ++i){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll new_val = a[0];
    for(int i = 1; i < n; ++i){
        new_val = (a[i] + new_val) / 2;
    }
    cout << new_val << "\n";
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