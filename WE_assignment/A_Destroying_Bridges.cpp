#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, k;
    cin >> n >> k;
    if(k >= n - 1){
        cout << 1 << "\n";
    }else{
        cout << n << "\n";
    }
    
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