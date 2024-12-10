#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll n, k, x;
    cin >> n >> k >> x;

    ll minSum = (k * (k + 1)) / 2;
    ll maxSum = (n * (n + 1)) / 2  - ((n - k) * (n - k + 1)) / 2;

    if(x >= minSum && x <= maxSum){
        cout << "YES" << "\n";
    }else{
        cout << "NO\n";

    }
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