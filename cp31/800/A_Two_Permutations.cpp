#include <bits/stdc++.h>
#define MOD 1000000007
#define long long ll

using namespace std;

void solve(){
    
    int n, a, b;
    cin >> n >> a >> b;
    if ((n - (a + b)) >= 2 || (a == n && b == n)){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
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