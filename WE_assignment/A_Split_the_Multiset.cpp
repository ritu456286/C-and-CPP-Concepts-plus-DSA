#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;


void solve(){
    
    int n, k;
    cin >> n >> k;
    // int ones_each_step = k - 1;
    int moves = 0;
    while(n > 1){
        n -= (k - 1);
        ++moves;
    }
    cout << moves << "\n";


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