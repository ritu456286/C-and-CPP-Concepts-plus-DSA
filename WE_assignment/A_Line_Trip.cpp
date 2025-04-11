#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, x, first, gas_stat, last;
    cin >> n >> x >> first;
    int max_fuel = first;
    last = first;
    for(int i = 1; i < n; ++i){
        cin >> gas_stat;
        max_fuel = max(max_fuel, (gas_stat - first));
        first = gas_stat;
        if(i == n - 1) last = gas_stat;
    }
    max_fuel = max(max_fuel, 2*(x - last));
    cout << max_fuel << "\n";


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