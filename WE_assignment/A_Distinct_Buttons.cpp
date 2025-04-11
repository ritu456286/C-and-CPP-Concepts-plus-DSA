#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

void solve(){
    
    int n, x, y;
    cin >> n;
    int positive_x = 0, negative_x = 0, positive_y = 0, negative_y = 0;
    for(int i = 1; i <= n; ++i){
        cin >> x >> y;
        if(x > 0) positive_x  = 1;
        else if(x < 0)  negative_x = 1;
        
        if(y > 0) positive_y = 1;
        else if(y < 0) negative_y = 1;
    }
    int buttons = positive_x + positive_y + negative_x + negative_y;
    cout << (buttons == 4 ? "NO\n" : "YES\n");

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