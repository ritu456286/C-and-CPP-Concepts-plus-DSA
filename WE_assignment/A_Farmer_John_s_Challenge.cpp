#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int k, n;
    cin >> n >> k;
    if(k == 1){
        for(int i = 1; i <=n; ++i){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    if(k == n){
        for(int i = 1; i <= n; ++i){
            cout << 1 << " ";
        }
        cout << "\n";
        return;
    }

    cout << -1 << "\n";

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