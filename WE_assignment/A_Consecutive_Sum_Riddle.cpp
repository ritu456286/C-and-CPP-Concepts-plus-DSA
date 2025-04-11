#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll n;
    cin >> n;
    if(n == 0){
        cout << -1 << " " << 1 << "\n";
        return;
    }
    if(n < 0){
        cout << n << " " << -(n + 1) << "\n";
        return;
    }
    cout << -(n - 1) << " " << n << "\n";


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