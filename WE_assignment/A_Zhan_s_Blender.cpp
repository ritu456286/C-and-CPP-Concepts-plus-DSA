#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll n, x, y;
    cin >> n >> x >> y;
    if(x < y){
        cout << n/x + (n % x != 0) << "\n";
        return;
    }
    cout << n/y + (n % y != 0) << "\n";


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