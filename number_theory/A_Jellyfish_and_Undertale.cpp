#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    //b + min(xi + 1, a) - 1
    
    ll a, b, n;
    cin >> a >> b >> n;
    ll xi;
    ll time = b;
    for(int i = 0;  i< n; i++){
        cin >> xi;
        time += min(xi + 1, a) - 1;
    }
    cout << time << "\n";


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