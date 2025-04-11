#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    ll a, b;
    cin >> n;
    unordered_set<ll> sa, sb;
    for(int i = 0; i < n; i++){
        cin >> a;
        sa.insert(a);
    }
    for(int i = 0; i < n; i++){
        cin >> b;
        sb.insert(b);
    }

    if(sa.size() >= 3 || sb.size() >= 3 || (sa.size() >=2 && sb.size() >= 2)){
        cout << "YES" << "\n";
        return;
    }
    cout << "NO\n";




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