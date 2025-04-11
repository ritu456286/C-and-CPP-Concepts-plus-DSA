#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    ll a, b;
    cin >> a >> b;
   
    if((a % 2 == 0 && a/2 != b) || (b % 2 == 0 && b/2 != a)){
        cout << "Yes\n";
        return;
    }
   
    cout << "No\n";


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