#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    for(int i = 0; i < n; ++i){
        if(c[i] != a[i] && c[i] != b[i]){
            cout << "YES\n";
            return;
        }
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