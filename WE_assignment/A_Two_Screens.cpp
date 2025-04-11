#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    string s, t ;
    cin >> s >> t;
    
    int i = 0, ans = 0;
    int min_len = min(s.size(), t.size());
    bool same = 0;
    while(i < min_len && s[i] == t[i]){
        ++ans;
        same = 1;
        ++i;
    }
    if(same) ans++;
    
    ans += t.size() - i + s.size() - i;
    cout << ans << "\n";
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